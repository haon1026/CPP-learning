//时间：2019年6月15日11:36:13
//用accumulate求一个vector<int>中的元素之和

#include <iostream>
#include <vector>
#include <numeric>

int main()
{   //答案是打开文件中的数据，导入到vector中
    std::vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << accumulate(iv.cbegin(), iv.cend(), 0) << std::endl;

    return 0;
}
