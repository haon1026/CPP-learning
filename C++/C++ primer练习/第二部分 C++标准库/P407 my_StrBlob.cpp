//ʱ�䣺2019��6��21��10:55:44
//��д���Լ���StrBlob�࣬����const�汾��front��back

#ifndef MY_STRBLOB_H
#define MY_STRBLOB_H
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <stdexcept>

class StrBlob
{
public:
     typedef std::vector<std::string>::size_type size_type;
     StrBlob();
     StrBlob(std::initializer_list<std::string> il);
     size_type size() const {return data->size();}
     bool empty() const {return data->empty();}
     //��Ӻ�ɾ��Ԫ��
     void push_back(const std::string &t) {data->push_back(t);}
     void pop_back();
     //Ԫ�ط���
     std::string &front();
     const std::string &front() const;
     std::string &back();
     const std::string &back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    //���data[i]���Ϸ����׳�һ���쳣
    void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>> (il)) {}

void StrBlob::check(size_type i, const std::string &msg) const
{
    if (i >= data->size())
        throw std::out_of_range(msg);
}

std::string &StrBlob::front()
{
    //���vectorΪ�գ�check���׳�һ���쳣
    check(0, "front on empty StrBlob");
    return data->front();
}

//const �汾front
const std::string &StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

//const�汾back
const std::string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    return data->pop_back();
}

#endif


