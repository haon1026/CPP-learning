//ʱ�䣺2019��3��13��17:01:35
//��Ĺ���
# include <iostream>

#define  fill 100

class Car
{
public:
	std::string color;
	std::string engine;
	unsigned gas_tank;
	unsigned int wheel;

	Car(void);    //���������޷���ֵ
	~Car();       //���������ͷ��ڴ�
	void set_color(std::string cor);
	void set_engine(std::string eng);
	void set_wheel(int whe);
	void fill_tank(int liter);  //���������������ͣ�����
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
	std::cout << "С��������ʻ" << "\n";
	gas_tank--;
	std::cout << "ʣ��" << 100*gas_tank/fill << "%����\n";
	return gas_tank;
}

void Car::warning(void)
{
	std::cout << "Warning!������,�Ƿ����������ʻ(Y/N):";
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