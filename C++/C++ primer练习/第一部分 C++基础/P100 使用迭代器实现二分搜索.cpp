//ʱ�䣺2019��5��13��17:12:44
//ʹ�õ�����ʵ�ֶ�������

#include <iostream>
#include <vector>

int main()
{
    std::vector<int>  v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};             //���������Ǵ�����������Ѱ��

    auto beg = v.begin(), end = v.end();
    auto mid = v.begin() + (end - beg) / 2;             //��ʼ״̬�µ��м��
    std::cout << "��������Ҫ���ҵ���:";
    int n;
    std::cin >> n;                                     //��Ҫ���ҵ���

    //������Ԫ����δ��鲢�һ�û���ҵ�nʱִ��ѭ��        �ڷ�Χ��Ϊ�յ�����£���һ��ִ��ʱ����mid!=end�������һֱû���ҵ�n�����mid�����n
    while (mid != end && *mid != n)                    //1.������ΧΪ��   2.������Χ��Ϊ�գ��ж�*mid��   3.*mid��=n��ѭ��    4.ѭ����ֹʱmid���ߵ���end����ָ��Ҫ�ҵ�Ԫ�أ���ʱmid=end˵��û��Ҫ�ҵ�Ԫ��
    {
        if (*mid > n)                                  //Ҫ�ҵĲ�����ǰ�벿�֣�
            end = mid;                                 //����ǣ�����������Χʹ�ú��Ժ�벿��
        else                                           //�ں�벿��
            beg = mid + 1;                             //��mid֮��Ѱ��,��Ϊmid��������Ҫ�ҵ�n
        mid = beg + (end - beg) / 2;                   //�µ��м��
    }
    std::cout << *mid << std::endl;

    return 0;
}
