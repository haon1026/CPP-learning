//时间：2019年3月9日23:24:33
//使用结构体实现信息录入系统
# include <iostream>
# include <fstream>   //文件读写
# include <string>

struct Student
{
	std::string name;
	std::string uid;
	char sex;
};

bool InitStudent();
bool ReadStudent();
void RecordStudent();
bool WriteStudent();

int main()
{
	int i;

	InitStudent();
	while(1)
	{
		std::cout << "请选择需要进行的操作" << "\n";
		std::cout << "1.打印数据到屏幕" << "\n";
		std::cout << "2.录入数据" << "\n";
		std::cout << "3.退出程序" << "\n";
		std::cout << "输入:";
		std::cin >> i;
		std::cout << "\n";

		switch(i)
		{
		case 1:
			if( ReadStudent() )
				std::cout << "成功读取文件\n\n";
			else
				std::cout << "读取文件失败\n\n";
			break;
		case 2:
			RecordStudent();
			break;
		case 3:
			return 0;
		default:
			std::cout << "输入不合理,请重新输入!!!\n";
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cout << "\n";
		}
	}



	return 0;
}

bool InitStudent()
{


	return true;
}

bool ReadStudent()
{
	char line[256];
	std::ifstream readfile;   //从文件流向内存的ifstream表示文件输入流，意味着文件读操作
	readfile.open("text.txt");

	if( readfile )
	{
		std::cout << "姓名" << " " << "身份证" << " " << "性别\n";
		while( readfile.good() )
		{
			readfile.getline(line,256);
		    puts(line);
		}
	    return true;
	}
	else
		return false;
}

void RecordStudent()
{
	std::ofstream outfile( "text.txt", std::ios::app );  //从内存流向文件的的ofstream表示文件输出流，意味着写文件操作
	//outfile.open( "text.txt", ios::app );

	struct Student STU;
	std::cout << "请输入姓名:";
	std::cin >> STU.name;
	std::cout << "请输入身份证:";
	std::cin >> STU.uid;
	std::cout << "请输入性别:";
	std::cin >> STU.sex;

	outfile << STU.name << " " << STU.uid << " " << STU.sex << "\n";
	outfile.close();

}

bool WriteStudent()
{
	return true;
}