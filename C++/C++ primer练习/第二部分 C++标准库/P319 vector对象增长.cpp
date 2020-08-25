//ʱ�䣺2019��6��12��23:05:20
//vector���������������

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    //sizeӦ��Ϊ0��capacity��ֵ�����ھ���ʵ��
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //��ivec���24��Ԫ��
    for (std::vector<int>::size_type ix = 0; ix != 24; ++ix)
        ivec.push_back(ix);
    //sizeӦ��Ϊ24��capacityӦ�ô��ڵ���24������ֵ�����ڱ�׼��ʵ��
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //Ԥ����һЩ����ռ�
    ivec.reserve(50);     //��capacity�����趨Ϊ50�����ܻ����
    //sizeӦ��Ϊ24��capacityӦ�ô��ڵ���50������ֵ�����ڱ�׼��ʵ��
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //���Ԫ���ù���ЩԤ���ռ�
    while (ivec.size() != ivec.capacity())
        ivec.push_back(0);
    //capacityӦ��δ�ı䣬size��capacity���
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    ivec.push_back(42);  //�����һ��Ԫ��
    //sizeӦ��Ϊ51��capacityӦ�ô��ڵ���51������ֵ�����ڱ�׼��ʵ��
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    ivec.shrink_to_fit();  //Ҫ��黹�ڴ�            //shrink_to_fitֻ��һ�����󣬱�׼�Ⲣ����֤�˻��ڴ�
    //sizeӦ��δ�ı䣻capacity��ֵ�����ھ���ʵ��
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //9.40����
    std::cout << std::endl;
    ivec.reserve(1024);
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;
    ivec.assign(256, 1);
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;
    ivec.resize(256);
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;


    return 0;
}
