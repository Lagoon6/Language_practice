#include<iostream>
using namespace std;

class Rectangle{
    int width;
    int height;
public: 
    Rectangle();
    ~Rectangle(){};
    void setLength(int a, int b){width = a, height= b;}
    double getArea(){return height*width; }

};

Rectangle::Rectangle(){
    width = 1;
    height = 1;
}

int main(){
    cout<<"생성하고자 하는 사각형의 개수?";
    int n, width, height;
    cin >> n;

    Rectangle *pArray = new Rectangle [n];
    for(int i=0; i<n; i++){
        cout <<"사각형" << i+1 <<":";
        cin >> width >> height;
        pArray[i].setLength(width, height);
    }

    int count = 0;
    Rectangle* p =pArray;
    for(int i=0; i<n; i++){
        cout << p->getArea() << "";
        if(p->getArea() >= 100 && p->getArea()<=200){
            count++;
        }
        p++;
    }
    cout<< endl << "면적이 100에서 200사이인 사각형의 개수는" << count << endl;

    delete[] pArray;
    
}