//时间：2019年6月19日23:57:46
//编写程序，定义一个作者及其作品的multimap。使用find在multimap中查找一个元素并用erase删除它。确保你的程序在元素不在map中时也能正常运行

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

void remove_author(std::multimap<std::string, std::string> &books, const std::string &author)
{
    auto pos = books.equal_range(author);     //查找给定作者范围
    if (pos.first == pos.second)             //空范围，没有该作者
        std::cout << "没有" << author << "这个作者" << std::endl;
    else
        books.erase(pos.first, pos.second);  //删除该作者所有著作
}

void print_books(std::multimap<std::string, std::string> &books)
{
    for (auto &book: books)       //遍历所有书籍，打印
        std::cout << book.first << ",《" << book.second << "》" << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::multimap<std::string, std::string> books;
    books.insert({"古龙", "连城诀"});
    books.insert({"古龙", "碧血剑"});
    books.insert({"金庸", "神雕侠侣"});
    books.insert({"金庸", "倚天屠龙记"});

    print_books(books);
    remove_author(books, "张三");
    remove_author(books, "金庸");
    print_books(books);

    return 0;
}
