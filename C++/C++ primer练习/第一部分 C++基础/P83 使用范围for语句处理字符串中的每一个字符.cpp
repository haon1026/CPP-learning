//时间：2019年5月11日15:46:32
//使用范围for循环语句处理字符串中的每一个字符

#include <iostream>
#include <string>

int main()
{
    //每行输出str中的一个字符
    std::string str("a Apple!!!");


    for(auto c : str)                     //让编译器决定变量c的类型，此处类型是char
        std::cout << c << std::endl;      //每一次迭代，str的下一个字符拷贝给c，本身字符串中的字符不做改变

    //使用ispunct函数统计string对象中标点符号的个数
    decltype(str.size()) punct_cnt = 0;

    for(auto c : str)
        if(ispunct(c))                    //如果字符为标点符号为真
        ++punct_cnt;
    std::cout << punct_cnt << " punctuation character in " << str << std::endl;


    //将字符串中的字符转换成大写形式
    for(auto &ch : str)                     //想要改变string对象中字符的值，必须把循环变量定义成引用类型
        ch = toupper(ch);                   //ch是一个引用，因此赋值语句将改变str中字符的值
    std::cout << str << std::endl;

    return 0;
}
