#include<iostream>
using namespace std;

class Triangle{
public:
    int height;
    int width;
    double getArea();
};

double Triangle::getArea(){
    return 0.5*height*width;
}

int main(){
    Triangle tri;
    tri.height = 7;
    tri.width = 5;
    cout.precision(3);
    cout<<"삼각형의 면적은"<<fixed<<tri.getArea()<<endl;

}