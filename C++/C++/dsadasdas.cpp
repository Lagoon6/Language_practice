#include<iostream>
#include<string>
using namespace std;

class Fruit{
private:
    string name;
    int price;
    int num;
    void show(){
        cout << name <<""<<price<<"원"<<num<<"개";
    }
public:
    int getTotal(){
        show();
        return num*price;
    }
    void setData(string name, int price, int num){
        this -> name =name;
        this -> price = price;
        this -> num = num;
    }
};

void getData(Fruit *p){
    int sum;
    int result [3];
    p[0].setData("사과",1000,10);
    p[1].setData("바나나",2000,10);
    p[2].setData("복숭아",1500,7);
    for(int i =0; i<3; i++){
        result[i] = p[i].getTotal();
        sum += result[i];
        cout << "총"<< result[i]<<"원"<<endl;
    }
    cout <<"과일 전체 가격은"<<sum<<"원";
}

int main(){
    Fruit* p= new Fruit[3];
    getData(p);
}