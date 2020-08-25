//时间：2019年3月13日19:06:30
//构造器与析构器举例       ///结构异常，c++ getline函数为什么要两次回车 可能跟编译器有关。
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

	std::cout << "请输入一句名言：\n";
	quote1.intputQuote();

	std::cout << "请输入作者：\n";
	quote1.intputSpeaker();

	if( quote1.write() )
	{
		std::cout << "成功写入文件";
	}
	else
	{
		std::cout << "写入文件失败";
		return 1;
	}

	return 0;
}


