#ifndef HEADER_H
#define HEADER_H

unsigned long returnFactorial(unsigned short num);
//unsigned short headerNum = 5;     //不加static const 会报错
static const unsigned short headerNum = 5;

#endif


//内链接的含义：在某个翻译单元里定义的东西只能在翻译单元里使用，在任何函数以外定义的静态变量都有内链接
//   this.cpp
//static int d = 8;
//   that.cpp
//static int d = 9;
//static是内链接，只能在该翻译单元内部使用，外部看不到
