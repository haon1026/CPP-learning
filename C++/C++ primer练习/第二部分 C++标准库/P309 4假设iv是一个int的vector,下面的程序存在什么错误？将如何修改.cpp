//时间：2019年6月11日11:26:35
//假设iv是一个int的vector,下面的程序存在什么错误？将如何修改

/*
    vector<int>::iterator iter = iv.begin(),
                          mid  = iv.begin() + iv.size() / 2;     //指向中央元素的迭代器

    while (iter != mid)               //
        if (*iter == some_val)
           iv.insert(iter, 2 * some_val);       //容器插入操作使现有迭代器失效，iter和mid都会失效
                                                //未对iter进行递增，iter无法向中点推进
                                                //由于添加了一个元素，需进行两次iter++才能将iter推进到原来元素之后的位置
                                                //添加元素后原先的中央元素位置变了，往后移了
*/

#include <iostream>
#include <vector>
/*
int main()
{
    std::vector<int> iv = {1, 1, 2, 1};    //int的vector
    int some_val = 1;

    std::vector<int>::iterator iter = iv.begin();
    int org_size = iv.size() / 2, new_ele = 0;    //记录原大小，中央元素的位置和新元素个数

    //每个循环步都重新计算"mid"，保证正确指向iv原中央元素
    while (iter != iv.begin() + org_size + new_ele)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val);   //iter指向新元素
            new_ele++;
            ++iter; ++iter;     //iter += 2;      //将iter推进到旧元素的下一个位置
        }
        else
            ++iter;     //简单推进iter
    }

    //用begin()获取vector首元素迭代器，遍历vector中的所有元素
    for (auto iter = iv.begin(); iter != iv.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
*/
//由于程序的意图使检查iv原来的前一半元素，也就是说，循环次数使预先可知的。因此，可以通过检测循环变量来控制循环执行次数，这要比
//比较”当前“迭代器和”中央迭代器“的方式简单一些

int main()
{
    std::vector<int> iv = {1, 1, 1, 1, 1};    //int的vector
    int some_val = 1;

    std::vector<int>::iterator iter = iv.begin();
    int org_size = iv.size(), i = 0;          //原大小

    //用循环变量控制循环次数
    while (i <= org_size / 2)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val);     //iter指向新元素
            ++iter;++iter;         //将iter推进到旧元素的下一个位置
        }
        else
           ++iter;        //简单推进iter
        ++i;
    }

    //用begin()获取vector首元素迭代器，遍历vector中的所有元素
    for (auto iter = iv.begin(); iter != iv.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
