#include<iostream>
using namespace std;

class Rectangle{
public:
    int width;
    int height;
    Rectangle();
    Rectangle(int length);
    Rectangle(int w, int h);
    bool isSquare();
};

Rectangle::Rectangle(){
    width = height = 1;
    
}
Rectangle::Rectangle(int length){
    width = height = length;

}
Rectangle::Rectangle(int w, int h){
    width = w;
    height = h;

}

bool Rectangle::isSquare(){
    if(height == width){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout<<"rect1은 정사각형이다"<<endl;
    if(rect2.isSquare()) cout<<"rect2은 정사각형이다"<<endl;
    if(rect3.isSquare()) cout<<"rect3은 정사각형이다"<<endl;

}