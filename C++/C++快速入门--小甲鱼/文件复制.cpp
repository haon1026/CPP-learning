//ʱ�䣺2019��3��11��22:19:16
//�ļ�����
# include <iostream>
# include <fstream>

using namespace std;

int main()
{
	char line[256];
	ifstream readfile( "text.txt", ios::in );
	ofstream writefile( "text2.txt", ios::out );

	if( readfile.is_open() && writefile.is_open() )     //����( readfile && writefile )
	{
		while( !readfile.eof() )         //�����ļ�ĩβ����false,���ļ�ĩβ����true
		{
			readfile.getline(line,256);      
			writefile << line << endl;
		}
	}
	readfile.close();
	writefile.coles();

	return 0;
}