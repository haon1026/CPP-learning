//时间：2019年6月21日10:55:44
//编写你自己的StrBlob类，包含const版本的front和back

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
     //添加和删除元素
     void push_back(const std::string &t) {data->push_back(t);}
     void pop_back();
     //元素访问
     std::string &front();
     const std::string &front() const;
     std::string &back();
     const std::string &back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    //如果data[i]不合法，抛出一个异常
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
    //如果vector为空，check会抛出一个异常
    check(0, "front on empty StrBlob");
    return data->front();
}

//const 版本front
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

//const版本back
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


