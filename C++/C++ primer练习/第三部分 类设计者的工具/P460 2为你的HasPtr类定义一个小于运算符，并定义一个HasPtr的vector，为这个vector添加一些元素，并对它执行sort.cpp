//ʱ�䣺2019��6��30��17:15:06
//Ϊ���HasPtr�ඨ��һ��С���������������һ��HasPtr��vector��Ϊ���vector���һЩԪ�أ�������ִ��sort
//ע���ʱ����swap

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class HasPtr
{
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &p) : ps(new std::string (*p.ps)), i(p.i) {}    //�������캯��
    HasPtr& operator=(const HasPtr&);                                   //������ֵ�����
    HasPtr& operator=(const std::string &rhs) {*ps = rhs; return *this;}    //������string
    std::string& operator*() {return *ps;}                              //������
    bool operator<(const HasPtr &rhs) const {return *ps < *rhs.ps;}     //�Ƚ�����
    ~HasPtr() {delete ps;}

private:
    std::string *ps;
    int i;
};

inline HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
    auto newps = new std::string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;

    return *this;
}

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    std::cout << "���� " << *lhs.ps << "��" << *rhs.ps << std::endl;
    swap (lhs.ps, rhs.ps);    //����ָ�룬������string����
    swap (lhs.i, rhs.i);      //����int��Ա
}


int main(int argc, char **argv)
{
    std::vector<HasPtr> vh;
    int n = atoi(argv[1]);
    for (int i = 0; i < n; i++)
        vh.push_back(std::to_string(n-i));

    for (auto p : vh)
        std::cout << *p << " ";
    std::cout << std::endl;

    sort(vh.begin(), vh.end());      //���ַ�������

    for (auto p : vh)
        std::cout << *p << " ";
    std::cout << std::endl;

    return 0;
}


