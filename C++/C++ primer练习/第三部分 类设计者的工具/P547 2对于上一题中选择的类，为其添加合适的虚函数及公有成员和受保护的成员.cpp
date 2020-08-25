//ʱ�䣺2019��7��9��20:56:04
//������һ����ѡ����࣬Ϊ����Ӻ��ʵ��麯�������г�Ա���ܱ����ĳ�Ա
//ͼ�λ�Ԫ���緽��Բ����Բ׶��

#include <iostream>

class Figure
{
public:
    Figure(double x, double y) : xSize(x), ySize(y) {}
protected:
    double xSize, ySize;     //ͼԪ�ĳߴ�
};

class Figure_2D : public Figure
{
public:
    Figure_2D(double x, double y) : Figure(x, y) {}
    virtual double area() = 0;      //��������������麯��
    virtual double perimeter() = 0; //���ܳ����������麯��
};

class Figure_3D : public Figure
{
public:
    Figure_3D(double x, double y, double z) : Figure(x, y), zSize(z) {}
    virtual double cubage() = 0;
protected:
    double zSize;
};

class Rectangle : public Figure_2D
{
public:
    Rectangle(double x = 0.0, double y = 0.0) : Figure_2D(x, y) {}
    virtual double area() {return xSize * ySize;}
    virtual double perimeter() {return xSize * 2 + ySize * 2;}
};

class Circle : public Figure_2D
{
public:
    Circle(double x = 0.0, double y = 0.0) : Figure_2D(x, y) {}
    virtual double area() {return xSize * xSize * 3.14;}
    virtual double perimeter() {return xSize * 2 * 3.14;}
};

class Sphere : public Figure_3D
{
public:
    Sphere(double x = 0.0, double y = 0.0, double z = 0.0) : Figure_3D(x, y, z) {}
    virtual double cubage() {return 3.14 * xSize * xSize * xSize;}
};

class Cone : public Figure_3D
{
public:
    Cone(double x = 0.0, double y = 0.0, double z = 0.0) : Figure_3D(x, y, z) {}
    virtual double cubage() {return xSize * xSize * 3.14 * zSize / 3.0;}
};

void print_figure(std::ostream &os, Rectangle &f)
{
    os << "area��" << f.area() << " perimeter��" << f.perimeter() << std::endl;
}

void print_figure(std::ostream &os, Circle &f)
{
    os << "area��" << f.area() << " perimeter��" << f.perimeter() << std::endl;
}

void print_figure(std::ostream &os, Sphere &f)
{
    os << "cubage��" << f.cubage() << std::endl;
}

void print_figure(std::ostream &os, Cone &f)
{
    os << "cubage��" << f.cubage() << std::endl;
}

int main()
{
    Rectangle r(10, 20);
    std::cout << "�����ε�������ܳ���" << std::endl;
    print_figure(std::cout, r);

    Circle c(3, 3);
    std::cout << "Բ��������ܳ���" << std::endl;
    print_figure(std::cout, c);

    Sphere s(2, 2);
    std::cout << "��������" << std::endl;
    print_figure(std::cout, s);

    Cone cc(2, 2, 3);
    std::cout << "Բ׶�������" << std::endl;
    print_figure(std::cout, cc);

    return 0;
}
