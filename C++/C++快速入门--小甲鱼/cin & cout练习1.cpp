//ʱ�䣺2019��3��8��13:39:29
//cin & cout ��ϰ 
# include <iostream>

int main()
{
	char answer;

	std::cout << "�������ʽ�����ǵ�Ӳ����?(Y/N)" << "\n";
	std::cin >> answer;

	switch( answer )
	{
	case 'Y':
	case 'y':
		std::cout << "��ʽ��Ӳ��" << "\n";
		break;
	case 'N':
	case 'n':
		std::cout << "�����и�ʽ��" << "\n";
		break;
	default:
		std::cout << "���벻����" << "\n";
		break;
	}

	//std::cin.ignore(100 , '\n');     //˼����Ϊɶ��Ҫ�������д��룿
	std::cout << "���������ַ���������" << "\n";
	std::cin.get();

	return 0;
}
