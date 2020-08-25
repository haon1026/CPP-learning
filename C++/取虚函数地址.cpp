//时间：2019年8月23日23:10:01

#include <iostream>
#include <string>

class Cbase
{
public:
	virtual void fun(int, int);
	virtual void fun2();
};


void Cbase::fun(int, int)
{
	std::cout << "调用基类fun" << std::endl;
}

void Cbase::fun2()
{
	std::cout << "调用基类fun2" << std::endl;
}

class Cderived : public Cbase
{
public:
	void fun(int, int);
	void fun2();
};

void Cderived::fun(int, int)
{
	std::cout << "调用派生类fun" << std::endl;
}

void Cderived::fun2()
{
	std::cout << "调用派生类fun2" << std::endl;
}

typedef void(_stdcall * Fun)(int a, int b);
typedef void(_stdcall * Fun2)();

int main()
{
	Cbase *cb = new Cderived;

	cb->fun(1, 2);
	Fun f = (Fun)(*(int *)*(int *)cb);
	(*f)(1, 2);

	std::cout << std::endl;

	cb->fun2();
	Fun2 f2 = (Fun2)(*((int *)*(int *)cb+1));
	f2();

	delete cb;
	return 0;
}
