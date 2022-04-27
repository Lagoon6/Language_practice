#include<iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(){};
    Circle(int r){ radius = r;}
    void setRadius(int r) {radius = r;}
    double getArea();
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle circleArray[3];
    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    for(int i=0; i<3; i++){
        cout << "Circle" << i<<"의 면적은" <<circleArray[i].getArea()<<endl;
    }

    Circle *p;
    p = circleArray; //배열의 경우 포인터는 &사용안함
    for(int i=0 ; i<3; i++){
        cout << "circle" <<i<<"의 면적은"<<p->getArea()<<endl;
        p++;
    }

}