//ʱ�䣺2019��6��7��09:43:53
//���ʺͲ�����������״̬

#include <iostream>

int main()
{
    //���Գ�ʼ״̬�¸�������״̬λbit��������ֵ
    std::cin.clear();             //��������������״̬Ϊ��λ��������״̬����Ϊ��Ч������void
    std::cout << std::istream::badbit << std::endl;      //strm::badbit����ָ�����ѱ���
    std::cout << std::istream::failbit << std::endl;     //strm::failbit����ָ��һ��IO����ʧ����
    std::cout << std::istream::eofbit << std::endl;      //strm::eofbit����ָ�����������ļ�����
    std::cout << std::istream::goodbit << std::endl;     //strm::goodbit����ָ����δ���ڴ���״̬

    std::cout << "cin.eof()��Ĭ��״̬Ϊ��" << std::cin.eof() << std::endl;           //������eof��λ���򷵻�true
    std::cout << "cin.fail()��Ĭ��״̬Ϊ��" << std::cin.fail() << std::endl;         //������failbit��λ��badbit��λ���򷵻�true
    std::cout << "cin.bad()��Ĭ��״̬Ϊ��" << std::cin.bad() << std::endl;           //������badbit��λ���򷵻�true
    std::cout << "cin.good()��Ĭ��״̬Ϊ��" <<std::cin.good() << std::endl;          //����������Ч״̬���򷵻�true
    std::cout << "cin.rdstate()��Ĭ��״̬Ϊ��" <<std::cin.rdstate() << std::endl;    //����s�ĵ�ǰ״̬����������ֵ����Ϊstrm::iostate
    std::cout << std::endl;

    //����cin�ڲ�ͬ����¸���bit�ͺ�����ֵ�� ���ļ�ĩβ����������
    int i;
    std::cin >> i;

    std::cout << "cin.eof()�ĵ�ǰ״̬Ϊ��" << std::cin.eof() << std::endl;
    std::cout << "cin.fail()�ĵ�ǰ״̬Ϊ��" << std::cin.fail() << std::endl;
    std::cout << "cin.bad()�ĵ�ǰ״̬Ϊ��" << std::cin.bad() << std::endl;
    std::cout << "cin.good()�ĵ�ǰ״̬Ϊ��" <<std::cin.good() << std::endl;
    std::cout << "cin.rdstate()�ĵ�ǰ״̬Ϊ��" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    //cin.clear(flags)�Ḳ��ԭ�е���״̬������״̬���Ϊflags����ʾ��״̬�� fail:4, eof:2, bad:1
    std::cin.clear(std::istream::badbit);
    std::cout << "��badbit��λ��cin.bad()�ĵ�ǰ״̬Ϊ��" << std::cin.bad() << std::endl;
    std::cout << "��badbit��λ��cin.rdstate()�ĵ�ǰ״̬Ϊ��" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    std::cin.clear(std::istream::eofbit);
    std::cout << "��eofbit��λ��cin.eof()�ĵ�ǰ״̬Ϊ��" << std::cin.eof() << std::endl;
    std::cout << "��eofbit��λ��cin.rdstate()�ĵ�ǰ״̬Ϊ��" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    std::cin.clear(std::istream::failbit);
    std::cout << "��badbit��λ��cin.fail()�ĵ�ǰ״̬Ϊ��" << std::cin.fail() << std::endl;
    std::cout << "��badbit��λ��cin.rdstate()�ĵ�ǰ״̬Ϊ��" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    //setstate��������������ĵ�״̬���ӵ�������ԭ״̬��
    std::cin.setstate(std::istream::eofbit);
    std::cout << "��eofbit��λ��cin.eof()�ĵ�ǰ״̬Ϊ��" << std::cin.eof() << std::endl;
    std::cout << "��eofbit��λ��cin.rdstate()�ĵ�ǰ״̬Ϊ��" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    std::cin.clear(std::cin.rdstate() & ~std::cin.failbit & ~std::cin.badbit);        //��::failbit, ����.failbit     6 -5 -3 ��
    std::cout << "��badbit��λ��cin.fail()�ĵ�ǰ״̬Ϊ��" << std::cin.fail() << std::endl;
    std::cout << "��badbit��λ��cin.rdstate()�ĵ�ǰ״̬Ϊ��" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    return 0;
}
