//ʱ�䣺2019��5��7��13:24:19
//ͳ��ÿ����ֵ���������˶��ٴ�           //whileѭ����ֹ������Ϊ����Ҫ�����һ�������

#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    if (std::cin >> currVal)
    {
        int cnt =1;
        while (std::cin >> val)
        {
            if (currVal == val)
            {
                ++cnt;
            }
            else
            {
               std::cout << currVal << "������" << cnt << "��" << std::endl;
               currVal = val;
               cnt = 1;
            }
        }
        std::cout << "hh" << '\n';
        std::cout << currVal << "������" << cnt << "��" << std::endl;
    }

    return 0;
}
