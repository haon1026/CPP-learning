//时间：2019年3月8日13:39:29
//cin & cout 练习 
# include <iostream>

int main()
{
	char answer;

	std::cout << "请输入格式化你们的硬盘吗?(Y/N)" << "\n";
	std::cin >> answer;

	switch( answer )
	{
	case 'Y':
	case 'y':
		std::cout << "格式化硬盘" << "\n";
		break;
	case 'N':
	case 'n':
		std::cout << "不进行格式化" << "\n";
		break;
	default:
		std::cout << "输入不合理" << "\n";
		break;
	}

	//std::cin.ignore(100 , '\n');     //思考：为啥需要加入这行代码？
	std::cout << "输入任意字符结束程序" << "\n";
	std::cin.get();

	return 0;
}
