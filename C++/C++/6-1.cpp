#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius =1 ){this -> radius = radius;}
    ~Circle() {cout << "반지름"<<radius <<"소멸중..."<<endl;}
    int getArea() {return (int)3.14*radius*radius;}
};

class Rectangle {
    int width, height;
public:
    Rectangle(int width, int height){this->width = width; this->height = height;}
    int getArea() {return width*height;}
};

int big(Circle& a, Rectangle& b){
    if (a.getArea() > b.getArea()){
        return a.getArea();
    }
    else return b.getArea();
}

int big(Circle c[], int size){
    int res = 0;
    for (int i = 0; i<size; i++){
        if (res < c[i].getArea()){
            res = c[i].getArea();
        }
    }
    return res;
}

int big(int a[], int size){
    int res = a[0];
    for(int i =1; i<size; i++){
        if(res < a[i]) res = a[i];
    }
    return res;
}

int main(){
    int* pArray = new int[5] {1, 2, -3,4,-5};
    cout << big(pArray, 5) <<endl;
    delete[] pArray;

    Circle donut(3);
    Rectangle book(10, 20);
    cout << big(donut, book)<<endl;

    Circle* pCircle = new Circle[3]{ Circle(1), Circle(2), Circle(3)};
    cout << big(pCircle,3 )<<endl;
    delete[] pCircle;
}