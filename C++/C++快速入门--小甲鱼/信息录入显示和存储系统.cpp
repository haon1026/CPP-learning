//ʱ�䣺2019��3��9��23:24:33
//ʹ�ýṹ��ʵ����Ϣ¼��ϵͳ
# include <iostream>
# include <fstream>   //�ļ���д
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
		std::cout << "��ѡ����Ҫ���еĲ���" << "\n";
		std::cout << "1.��ӡ���ݵ���Ļ" << "\n";
		std::cout << "2.¼������" << "\n";
		std::cout << "3.�˳�����" << "\n";
		std::cout << "����:";
		std::cin >> i;
		std::cout << "\n";

		switch(i)
		{
		case 1:
			if( ReadStudent() )
				std::cout << "�ɹ���ȡ�ļ�\n\n";
			else
				std::cout << "��ȡ�ļ�ʧ��\n\n";
			break;
		case 2:
			RecordStudent();
			break;
		case 3:
			return 0;
		default:
			std::cout << "���벻����,����������!!!\n";
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
	std::ifstream readfile;   //���ļ������ڴ��ifstream��ʾ�ļ�����������ζ���ļ�������
	readfile.open("text.txt");

	if( readfile )
	{
		std::cout << "����" << " " << "���֤" << " " << "�Ա�\n";
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
	std::ofstream outfile( "text.txt", std::ios::app );  //���ڴ������ļ��ĵ�ofstream��ʾ�ļ����������ζ��д�ļ�����
	//outfile.open( "text.txt", ios::app );

	struct Student STU;
	std::cout << "����������:";
	std::cin >> STU.name;
	std::cout << "���������֤:";
	std::cin >> STU.uid;
	std::cout << "�������Ա�:";
	std::cin >> STU.sex;

	outfile << STU.name << " " << STU.uid << " " << STU.sex << "\n";
	outfile.close();

}

bool WriteStudent()
{
	return true;
}