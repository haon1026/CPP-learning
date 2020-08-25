//时间：2019年6月28日18:47:20
//分别编写前三题中所描述的numbered和f，验证你是否正确预测了输出结果

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
