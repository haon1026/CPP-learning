//ʱ�䣺2019��6��28��18:47:20
//�ֱ��дǰ��������������numbered��f����֤���Ƿ���ȷԤ����������

#include <iostream>

class numbered
{
private:
    static int seq;
public:
    numbered() {mysn = seq++;}
    //13.15
    //numbered(const numbered &) {mysn = seq++;}
    int mysn;
};

int numbered::seq = 0;

void f(numbered s)
{
    std::cout << s.mysn << std::endl;
}
/*
//13.16
void f(const numbered &s)
{
    std::cout << s.mysn << std::endl;
}
*/

int main()
{
    numbered a, b = a, c = b;
    std::cout << a.mysn << " " << b.mysn << " " << c.mysn << std::endl;
    f(a);
    f(b);
    f(c);

    return 0;
}
