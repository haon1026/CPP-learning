//时间：2019年6月12日13:30:29
//编写函数，接受一个forward_list string和两个string共三个参数，函数应在链表中查找第一个string,并将第二个string
//插入到紧接着第一个string之后的位置。若第一个string未在链表，则将第二个string插入到链表末尾

#include <iostream>
#include <forward_list>
#include <string>

void func(std::forward_list<std::string> &flist, const std::string &str1, const std::string &str2)
{
    auto prev = flist.before_begin();        //前驱元素
    auto curr = flist.begin();               //当前元素
    bool inserted = false;

    while (curr != flist.end())
    {
        if (*curr == str1)                     //找到给定字符串
        {
            curr = flist.insert_after(curr, str2);    //插入新字符串，curr指向它
            //break;      //每有一个相同字符串str1都要添加str2，所以要全部遍历一遍，不能中途退出
            inserted = true;
        }

        prev = curr;         //前驱迭代器向前推进              //else{prev = curr; ++curr;}也可得到同样的结果，思考???
        ++curr;              //当前迭代器向前推进
    }
    if(!inserted)
        flist.insert_after(prev, str2);

    return;
}

int main()
{
    std::forward_list<std::string> flist = {"Welcome", "to", "China", "nice", "to", "meet", "you"};


    func(flist, "Welcome", "你好");
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    func(flist, "to", "？");
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    func(flist, "great", "再见");
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
