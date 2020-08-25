//ʱ�䣺2019��3��13��19:06:30
//������������������       ///�ṹ�쳣��c++ getline����ΪʲôҪ���λس� ���ܸ��������йء�
# include <iostream>
# include <string>
# include <fstream>

class StoreQuote
{
public:
	std::string quote, speaker;
	std::ofstream fileOutput;

	StoreQuote();
	~StoreQuote();
	
	void intputQuote();
	void intputSpeaker();
	bool write();
};

StoreQuote::StoreQuote()
{
	fileOutput.open("test.txt", std::ios::app);
}

StoreQuote::~StoreQuote()
{
	fileOutput.close();
}

void StoreQuote::intputQuote()
{
	std::getline(std::cin, quote);
}

void StoreQuote::intputSpeaker()
{
	std::getline(std::cin, speaker);
}

bool StoreQuote::write()
{
	if( fileOutput.is_open() )
	{
		fileOutput << quote << "|" << speaker << "\n";
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	StoreQuote quote1;

	std::cout << "������һ�����ԣ�\n";
	quote1.intputQuote();

	std::cout << "���������ߣ�\n";
	quote1.intputSpeaker();

	if( quote1.write() )
	{
		std::cout << "�ɹ�д���ļ�";
	}
	else
	{
		std::cout << "д���ļ�ʧ��";
		return 1;
	}

	return 0;
}


