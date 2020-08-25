//时间：2019年3月13日17:01:35
//类的构造
# include <iostream>

#define  fill 100

class Car
{
public:
	std::string color;
	std::string engine;
	unsigned gas_tank;
	unsigned int wheel;

	Car(void);    //构造器，无返回值
	~Car();       //析构器，释放内存
	void set_color(std::string cor);
	void set_engine(std::string eng);
	void set_wheel(int whe);
	void fill_tank(int liter);  //方法的声明，加油，公升
	int running(void);
	void warning(void);
};
/*
Car::Car(void)
{
	color = "White";
	engine = "V8";
	wheel = 4;
	gas_tank = fill;
}
*/
void Car::fill_tank(int liter)
{
	gas_tank += liter;
}

void Car::set_color(std::string cor)
{
	color = cor;
}

void Car::set_engine(std::string eng)
{
	engine = eng;
}

void Car::set_wheel(int whe)
{
	wheel = whe;
}

int Car::running(void)
{
	std::cout << "小车正在行驶" << "\n";
	gas_tank--;
	std::cout << "剩余" << 100*gas_tank/fill << "%油量\n";
	return gas_tank;
}

void Car::warning(void)
{
	std::cout << "Warning!油量低,是否加满油再行驶(Y/N):";
}

int main()
{
	char ch;
	int i;
	Car mycar;
	mycar.set_color("White");
	mycar.set_engine("V8");
	mycar.set_wheel(4);
	mycar.gas_tank = fill;

	while( i = mycar.running() )
	{
		if( i < 10 )
		{
			mycar.warning();
			std::cin >> ch;
			if( 'Y' == ch || 'y' == ch )
			{
				mycar.fill_tank(fill);
			}

		}
	}
	

	return 0;
}