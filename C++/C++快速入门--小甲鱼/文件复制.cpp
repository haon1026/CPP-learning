//时间：2019年3月11日22:19:16
//文件复制
# include <iostream>
# include <fstream>

using namespace std;

int main()
{
	char line[256];
	ifstream readfile( "text.txt", ios::in );
	ofstream writefile( "text2.txt", ios::out );

	if( readfile.is_open() && writefile.is_open() )     //或者( readfile && writefile )
	{
		while( !readfile.eof() )         //不在文件末尾返回false,在文件末尾返回true
		{
			readfile.getline(line,256);      
			writefile << line << endl;
		}
	}
	readfile.close();
	writefile.coles();

	return 0;
}