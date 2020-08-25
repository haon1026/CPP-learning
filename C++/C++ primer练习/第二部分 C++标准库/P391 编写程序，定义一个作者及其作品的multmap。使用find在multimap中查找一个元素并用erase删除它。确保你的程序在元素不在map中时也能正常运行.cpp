//ʱ�䣺2019��6��19��23:57:46
//��д���򣬶���һ�����߼�����Ʒ��multimap��ʹ��find��multimap�в���һ��Ԫ�ز���eraseɾ������ȷ����ĳ�����Ԫ�ز���map��ʱҲ����������

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

void remove_author(std::multimap<std::string, std::string> &books, const std::string &author)
{
    auto pos = books.equal_range(author);     //���Ҹ������߷�Χ
    if (pos.first == pos.second)             //�շ�Χ��û�и�����
        std::cout << "û��" << author << "�������" << std::endl;
    else
        books.erase(pos.first, pos.second);  //ɾ����������������
}

void print_books(std::multimap<std::string, std::string> &books)
{
    for (auto &book: books)       //���������鼮����ӡ
        std::cout << book.first << ",��" << book.second << "��" << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::multimap<std::string, std::string> books;
    books.insert({"����", "���Ǿ�"});
    books.insert({"����", "��Ѫ��"});
    books.insert({"��ӹ", "�������"});
    books.insert({"��ӹ", "����������"});

    print_books(books);
    remove_author(books, "����");
    remove_author(books, "��ӹ");
    print_books(books);

    return 0;
}
