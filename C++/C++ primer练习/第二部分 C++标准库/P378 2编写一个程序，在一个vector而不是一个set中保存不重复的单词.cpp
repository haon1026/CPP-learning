//ʱ�䣺2019��6��18��21:23:52
//��дһ��������һ��vector������һ��set�б��治�ظ��ĵ���

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

/*   ����ֱ����find�������ҵ���
int main()
{
    std::vector<int> ivec;
    int val;
    while (std::cin >> val)
    {
        std::vector<int>::iterator iter;
        for (iter = ivec.begin(); iter != ivec.end(); iter++)
        {
            if (val == *iter)
                break;
        }
        if (iter == ivec.end())
            ivec.push_back(val);
    }

    for (auto c : ivec)
        std::cout << c << " ";
    std::cout << std::endl;

    return 0;
}
*/

#include <iostream>
#include <map>
#include <set>
#include <string>

std::string &trans(std::string &s)
{
    for (int p = 0; p < s.size(); p++)
    {
        if (s[p] > 'A' && s[p] < 'Z')       //��ÿ���ַ����ȼ���Ƿ�ʹ��д
            s[p] -= ('A' - 'a');            //����ǣ�����ת��ΪСд
        else if (s[p] == ',' || s[p]== '.') //����Ƿ�����
            s.erase(p, 1);                  //����ǣ�����ɾ��
    }

    return s;
}
//��
//vector�汾:��Ҫ��find�����¶���ĵ����Ƿ�����vector��
//1set�汾������Ƿ��ظ��Ĺ�������setģ�帺���,����Ա�����д��Ӧ�Ĵ���
int main()
{

    //1std::vector<std::string> unique_word;     //���ظ��ĵ���
    std::set<std::string> unique_word;
    std::string word;

    while (std::cin >> word)
    {
        trans(word);
        //1if (find(unique_word.begin(), unique_word.end(), word) == unique_word.end())
            //1unique_word.push_back(word);    //��Ӳ��ظ�����
        unique_word.insert(word);
    }

    for (const auto &w : unique_word)   //��ӡ���ظ�����
    {
        std::cout << w << " ";
    }
    std::cout << std::endl;

    return 0;
}
