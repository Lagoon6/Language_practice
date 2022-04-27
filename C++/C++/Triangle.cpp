#include <iostream>
using namespace std;

class Triangle {
public:
    int width;
    int height;
    double getArea();
};

double Triangle::getArea(){
    return 0.5*width*height;
}

int main(){
    Triangle tri;
    tri.width =3;
    tri.height =5;
    cout.precision(2);
    cout << "삼각형의 면적은" <<fixed << tri.getArea()<<endl;
}