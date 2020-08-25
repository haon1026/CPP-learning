//时间2019年3月8日13:54:45
//cin & cout 练习2         华氏温度 = 摄氏温度 * 9.0/5.0 + 32

# include <iostream>

int main()
{
	const unsigned short ADD_SUBTRACT = 32;
	const double RATIO = 9.0/5.0;

	double tempIn, tempOut;
	char typeIn, typeOut;

	std::cout << "请以（xx.x C）或者（xx.x F）格式输入一个温度:";
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
		std::cout << "输入错误" << "\n";

	std::cout << "输入任意字符结束程序" << "\n";
	std::cin.get();

	return 0;
}
