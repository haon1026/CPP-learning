//时间：2019年6月30日17:15:06
//为你的HasPtr类定义一个小于运算符，并定义一个HasPtr的vector，为这个vector添加一些元素，并对它执行sort
//注意何时调用swap

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class HasPtr
{
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &p) : ps(new std::string (*p.ps)), i(p.i) {}    //拷贝构造函数
    HasPtr& operator=(const HasPtr&);                                   //拷贝赋值运算符
    HasPtr& operator=(const std::string &rhs) {*ps = rhs; return *this;}    //赋予新string
    std::string& operator*() {return *ps;}                              //解引用
    bool operator<(const HasPtr &rhs) const {return *ps < *rhs.ps;}     //比较运算
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
    std::cout << "交换 " << *lhs.ps << "和" << *rhs.ps << std::endl;
    swap (lhs.ps, rhs.ps);    //交换指针，而不是string数据
    swap (lhs.i, rhs.i);      //交换int成员
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

    sort(vh.begin(), vh.end());      //按字符串排序

    for (auto p : vh)
        std::cout << *p << " ";
    std::cout << std::endl;

    return 0;
}


