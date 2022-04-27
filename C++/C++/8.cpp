#include<iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0){
        this -> kick = kick; this->punch = punch;
    }
    void show();
    Power operator+ (Power op2);
    Power operator- (Power op2);
};

class Coord{
    int X,Y;
public:
    Coord(int X = 0, int Y =0){
        this ->X = X; this -> Y= Y;
    }
    void show();
    Coord operator+ (Coord c2);
    Coord operator- (Coord c2);  
};

class Circle{
    int radius;
public:
    Circle(int radius = 1);
    void show();
    double getArea(){return 3.14*radius*radius;}
    Circle operator+ (Circle op1);
    Circle operator- (Circle op1);
};


Circle Circle::operator+(Circle op1){
    Circle tmp;
    tmp.radius = radius + op1.radius;
    return tmp;
}
Circle Circle::operator-(Circle op1){
    Circle tmp;
    tmp.radius = radius - op1.radius;
    return tmp;
}
Power Power::operator+(Power op2){
    Power tmp;
    tmp.kick = this -> kick + op2.kick;
    tmp.punch = this -> punch +op2.punch;
    return tmp;
}
Power Power::operator-(Power op2){
    Power tmp;
    tmp.kick = this -> kick - op2.kick;
    tmp.punch = this -> punch - op2.punch;
    return tmp;
}
Coord Coord::operator+(Coord c2){
    Coord tmp;
    tmp.X = this->X + c2.X;
    tmp.Y = this->Y + c2.Y;
    return tmp;
}
Coord Coord::operator-(Coord c2){
    Coord tmp;
    tmp.X = this->X - c2.X;
    tmp.Y = this->Y - c2.Y;
    return tmp;
}




Circle::Circle(int radius){
    cout << "반지름" <<radius <<"원 생성중.."<<endl;
    this -> radius = radius;
}
void Circle::show(){
    cout<<"반지름"<<radius<<','<<"면적"<<getArea() <<endl;
}
void Power::show(){
    cout << "kick="<<kick <<'.' << "punch= "<< punch<< endl;
}
void Coord::show(){
    cout << "Coord X="<<X <<','<<"Y="<<Y<<endl;
}



int main(){
    Power a(3,5), b(4,6), c;
    c = a+b;
    a.show();
    b.show();
    c.show();

    Power a1(3,5), b1(4,6), c1;
    c1 = a1-b1;
    a1.show();
    b1.show();
    c1.show();

    Coord x(3,5),y(4,6),z;
    z = x+y;
    x.show();
    y.show();
    z.show();

    Coord x1(3,5),y1(4,6),z1;
    z1 = x1-y1;
    x1.show();
    y1.show();
    z1.show();

    Circle r1(3),r2(5),r3;
    r3 = r1+r2;
    r1.show();
    r2.show();
    r3.show();

    Circle r4(5),r5(3),r6;
    r6 = r4-r5;
    r4.show();
    r5.show();
    r6.show();

}