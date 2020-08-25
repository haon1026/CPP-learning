//时间：2019年5月15日21:54:05
//使用两层嵌套的for循环以及范围for循环处理多维数组

#include <iostream>

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];         //12个未初始化的元素

    //嵌套for循环处理
    //对于每一行
    for (size_t i = 0; i != rowCnt; ++i)
    {
        //对于行内的每一列
        for (size_t j = 0; j != colCnt; ++j)
        {
            ia[i][j] = i * colCnt + j;
            std::cout << ia[i][j] << " ";
        }
    }
    std::cout << std::endl;

    //范围for循环处理
    size_t cnt = 0;
    for (auto &row : ia)               //对于外层数组的每一个元素       因为要改变元素的值，把内外层都把控制变量声明成引用类型，如果不改变元素的值，
        for (auto &col : row)          //对于内层数组的每一个元素       外层控制变量也要声明成引用类型，避免数组被自动转成指针
        {
            col = cnt;                 //将下一个值赋给该元素
            std::cout << col << " ";
            ++cnt;                     //将cnt加1

        }
    std::cout << std::endl;

    return 0;
}
