#include <iostream>

class Figure
{
public:
    virtual double getSquare() = 0;
    virtual double getPerimeter() = 0;
};

class Rectangle : public Figure
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h)
    {

    }
    double getSquare() override
    {
        return width * height;
    }
    double getPerimeter() override
    {
        return width * 2 + height * 2;
    }
};

class Circle : public Figure
{
private:
    double radius;
public:
    Circle(double r) : radius(r)
    {

    }
    double getSquare() override
    {
        return radius * radius * 3.14;
    }
    double getPerimeter() override
    {
        return 2 * 3.14 * radius;
    }
};

class Trapezium : public Figure
{
private:
    double baseA;
    double baseB;
    double baseС;
    double baseD;
    double height;
public:
    Trapezium(double a, double b, double c, double d, double h) : baseA(a), baseB(b), baseС(c), baseD(d), height(h)
    {

    }
    double getSquare() override
    {
        return (baseA + baseB) * height / 2;
    }
    double getPerimeter() override
    {
        return baseA + baseB + baseС + baseD;
    }
};

int main()
{
    Rectangle rect(16, 54);
    Circle circle(21);
    Trapezium trapezium(20, 10, 22, 44, 5);

    std::cout << "Rectangle square: " << rect.getSquare() << std::endl;
    std::cout << "Circle square: " << circle.getSquare() << std::endl;
    std::cout << "Trapezium square: " << trapezium.getSquare() << std::endl;

    std::cout << std::endl;

    std::cout << "Rectangle perimeter: " << rect.getPerimeter() << std::endl;
    std::cout << "Circle perimeter: " << circle.getPerimeter() << std::endl;
    std::cout << "Trapezium perimeter: " << trapezium.getPerimeter() << std::endl;

    return 0;
}