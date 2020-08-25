//ʱ�䣺2019��6��3��13:08:01
//P246 ��дScreen�� + ΪScreen������ֹ��캯��
//P249 ΪScreen�����move,set��display����

#include <iostream>
#include <string>

class Screen
{
public:
    //���캯����������ʽ��1��Ĭ�Ϲ��캯�� 2�����ܸߺͿ��ֵ����Ļ���ݳ�ʼ��Ϊ�հ� 3�����ܸߺͿ��ֵ����Ļ���ݳ�ʼ��Ϊ�ַ�
    Screen() = default;
    Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(unsigned ht, unsigned wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const {return contents[cursor];}    //��ȡ��ǰ�������λ�õ��ַ�
    inline char get(unsigned, unsigned) const;     //��ȡָ��λ�ù����ַ�
    Screen &move(unsigned, unsigned);               //����ƶ���ָ��λ��
    Screen &set(char);                              //Ϊ��ǰ�������λ�ø�����ֵ
    Screen &set(unsigned, unsigned, char);          //Ϊָ��λ�õĹ�������ֵ
    Screen &display(std::ostream &);                //��ӡScreen������              //�����ĸ������������ʹ�Screen&�޸�ΪScreen���������

private:
    unsigned cursor = 0;
    unsigned height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {os << contents;}
};

inline char Screen::get(unsigned r, unsigned c) const
{
    return contents[r * width + c];
}

inline Screen &Screen::move(unsigned r, unsigned c)
{
    cursor = r * width + c;
    return *this;
}

inline Screen &Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}

inline Screen &Screen::set(unsigned r, unsigned c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}

inline Screen &Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

int main()
{
    Screen myScreen(5, 5, 'X');

    std::cout << myScreen.get() << std::endl;

    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";

    std::cout << myScreen.get(4, 0) << std::endl;

    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}
