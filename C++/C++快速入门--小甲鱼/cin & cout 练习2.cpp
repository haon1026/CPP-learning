//ʱ��2019��3��8��13:54:45
//cin & cout ��ϰ2         �����¶� = �����¶� * 9.0/5.0 + 32

# include <iostream>

int main()
{
	const unsigned short ADD_SUBTRACT = 32;
	const double RATIO = 9.0/5.0;

	double tempIn, tempOut;
	char typeIn, typeOut;

	std::cout << "���ԣ�xx.x C�����ߣ�xx.x F����ʽ����һ���¶�:";
	std::cin >> tempIn >> typeIn;
	std::cin.ignore(100, '\n');
	std::cout << "\n";

	switch( typeIn )
	{
	case 'C':
	case 'c':
		tempOut = tempIn * RATIO + ADD_SUBTRACT;
		typeOut = 'F';
		typeIn = 'C';
		break;
	case 'F':
	case 'f':
		tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
		typeOut = 'C';
		typeIn = 'F';
		break;
	default:
		typeOut = 'E';
		break;
	}
	
	if( typeOut != 'E')
	{
		std::cout << tempIn << typeIn << "=" << tempOut << typeOut << "\n\n";
	}
	else
		std::cout << "�������" << "\n";

	std::cout << "���������ַ���������" << "\n";
	std::cin.get();

	return 0;
}
