#include <iostream>
#include <valarray>
#include "math.h"

class Shape {
public:
    virtual int getArea() = 0;


};

class Circle : public Shape{

private:
    double radius;
    static constexpr double pi = 3.14;
public:



    explicit Circle(double radius) : radius(radius) {}


    int getArea() override {
        return radius * radius * pi;
    }
};

class Square : public Shape{

private:
    double side;
public:

    explicit Square(double side) : side(side) {}


    int getArea() override {
        return side * side;
    }
};


class Rectangle : public Shape{
private:
    double firstSide;
    double secondSide;
public:
    Rectangle(double firstSide, double secondSide) : firstSide(firstSide), secondSide(secondSide) {}



    int getArea() override {
        return firstSide * secondSide;
    }
};

class Trapezoid : public Shape{
private:
    double firstSide;
    double secondSide;
    double height;

public:

    Trapezoid(double firstSide, double secondSide, double height) : firstSide(firstSide), secondSide(secondSide),
                                                                    height(height) {}

    int getArea() override {
        return ((firstSide + secondSide) * height) / 2;
    }


};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}

    int getArea() override {

        double p = side1 + side2 + side3;

        return sqrt(p * (p - side1) * (p - side2) * (p - side3));
    }

};
int main() {

    Circle circle(10.2);
    Square square(3);
    Rectangle rectangle(3, 4);
    Trapezoid trapezoid(2.0, 4.5, 3);
    Triangle triangle(4, 5, 6);

    std::cout<<circle.getArea()<<std::endl;
    std::cout<<square.getArea()<<std::endl;
    std::cout<<rectangle.getArea()<<std::endl;
    std::cout<<trapezoid.getArea()<<std::endl;
    std::cout<<triangle.getArea()<<std::endl;

    return 0;
}
