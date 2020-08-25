//时间：2019年6月7日15:24:42
//文件操作演示全缓冲

#include <fstream>
#include <cstdlib>

int main()
{
    //创建文件test.txt并打开
    std::ofstream outfile("test.txt");
    //向text.txt文件中写入4096个字符'a'
    for (int n = 0; n < 4096; ++n)
    {
        outfile << 'a';
    }
    //暂停，按任意键继续
    system("PAUSE");
    //继续向test.file文件中写入字符'b',也就是说第4097个字符是'b'
    outfile << 'b';
    //暂停，按任意键继续
    system("PAUSE");

    return 0;   //程序正常结束作为main函数的retrun操作的一部分，缓冲刷新被执行
}

//验证Windows下全缓冲的大小是4096个字节，并验证缓冲区满后刷新缓冲区，执行真正的I/O操作
//编译并执行后，test.file文件是空的，说明4096个字符'a'还在缓冲区，并没有真正执行I/O操作，敲一下回车键
//此时再打开文件，此时文件中已经有了4096个字符'a'，说明缓冲区的大小是4K(4096),缓冲区满后执行了I/O操作，
//而字符'b'还在缓冲区中，再敲一下回车键，再打开文件，此时'b'也在其中了，进一步验证了文件关闭时刷新了缓冲区
