#include<iostream>
using namespace std;

class Circle{
public:
    int radius;
    
    Circle();
    Circle(int r);
    ~Circle(); //소멸자
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "반지름"<< radius<<"원생성"<<endl;

}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 "<< radius<<"원생성"<<endl;

}
Circle::~Circle(){
    cout<<"반지름"<<radius<<"원 소멸"<< endl;  //소멸자는 생성자의 역순으로

}

double Circle::getArea(){
    return 3.14*radius*radius;
}

Circle globalDonut(1000);  //전역변수 먼저 실행
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}
int main(){
    Circle mainDonut;  
    Circle mainPizza(30);

    f();
}