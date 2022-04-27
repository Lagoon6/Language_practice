#include <iostream>
using namespace std;

class Tower {
    int height;
public:
    Tower(){height = 1;}
    Tower(int h);
    int getHeight();
};

Tower::Tower(int h){
    height = h;
}

int Tower::getHeight(){
    return height;
}

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout<<"높이는" <<myTower.getHeight() <<"미터" <<endl;
    cout<<"높이는" <<seoulTower.getHeight()<<"미터"<<endl;
}