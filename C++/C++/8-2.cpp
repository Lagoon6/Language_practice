#include<iostream>
using namespace std;
#include<string>

class Circle{
    int radius;
public:
    Circle(int radius= 0){
        this->radius = radius;
    }
    int getRadius(){return radius;}
    void setRadius(int radius){this->radius = radius;}
    double getArea(){return 3.14*radius*radius;}
};

class NamedCircle : public Circle{
    string name;
public:
    NamedCircle(int radius =0, string name= "") : Circle(radius){
        this-> name = name;
    }
    void setRName(int r, string name){
        setRadius(r);
        this-> name = name;
    }
    string getName(){
        return name;
    }
};

int main(){
    NamedCircle pizza[5];
    int i,r;
    string name;

    cout << "5 개의 정수 반지름과 원의 이름을 입력하시오"<<endl;
    for(i=0;i<5;i++){
        cout<< i+1<<">>";
        cin >>r >>name;
        pizza[i].setRName(r,name);
    }

    double max = pizza[0].getArea();
    name = pizza[0].getName();
    for(i=1;i<5;i++){
        if(pizza[i].getArea()>max){
            max = pizza[i].getArea();
            name = pizza[i].getName();
        }
    }
    cout<< " 가장 면적이 큰 피자는"<< name << "입니다"<<endl;
}