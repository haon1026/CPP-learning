//2019��6��15��10:19:37
//ͷ�ļ�algorithm�ж�����һ����Ϊcount�ĺ�����������find������һ�Ե�������һ��ֵ��Ϊ������count���ظ���ֵ�������г��ֵĴ���
//��д���򣬶�ȡint���д���vector�У���ӡ�ж��ٸ�Ԫ�ص�ֵ���ڸ���ֵ

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    std::cout << "���������ɸ�����:" << std::endl;
    std::vector<int> iv;
    int i;
    while (std::cin >> i)
    {
        iv.push_back(i);
    }
    std::cin.clear(); //����cin��״̬��ʶ
    std::cin.sync();  //�����������������
    std::cout << "������Ҫ������������";
    int val;
    std::cin >> val;
    std::cout << "iv����"<< count(iv.begin(), iv.end(), val) << "��" << val << std::endl;

/*  //���ָ��Ҫ�ҵ������⼸���ǽ���whileѭ������ı�cin״̬���ܼ������룬  ���Ǵ����ļ�����
    //��Ϊ�������������ߴ������뵼��cin״̬�ı��ˣ������
    std::cout << "cin.eof():" << std::cin.eof() << std::endl << "cin.fail():" << std::cin.fail() << std::endl;   //�鿴cin��״̬��ʶ
    std::cin.clear(); //����cin��״̬��ʶ
    std::cin.sync();  //�����������������
    std::cout << "cin.eof():" << std::cin.eof() << std::endl << "cin.fail():" << std::cin.fail() << std::endl;   //�鿴cin��״̬��ʶ
*/
    std::cout << "���������ɸ��ַ���:" << std::endl;
    std::list<std::string> sl;
    std::string s;
    while (std::cin >> s)
    {
        sl.push_back(s);
    }
    std::cin.clear(); //����cin��״̬��ʶ
    std::cin.sync();  //�����������������
    std::cout << "������Ҫ�������ַ�����";
    std::string word;
    std::cin >> word;
    std::cout << "sl����"<< count(sl.begin(), sl.end(), word) << "��" << word << std::endl;
    return 0;
}
