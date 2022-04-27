#include<iostream>
using namespace std;

class Circle{
public:
    int radius;
    double getArea();

};

double Circle::getArea(){
    return radius*radius*3.14;
}

int main(){
    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();
    cout<<"donut의 면적은"<<area<<endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout<<"pizza의 면적은"<<area<<endl;
}