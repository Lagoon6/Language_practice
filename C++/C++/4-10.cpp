#include<iostream>
#include<string>
using namespace std;

class Person{
    string name;
public:
    Person(string name) {this -> name = name;}
    string getName() {return name;}
    Person(){};
    void setName(string name){this -> name = name;}
};

class Family{
    Person *p;
    int size;
    string name;
public:
    Family(string name, int size);
    void show();
    ~Family();
    void setName(int num, string name);
};

void Family::setName(int num, string name){
    p[num].setName(name);
}

void Family::show(){
    cout<<"simpson가족은 다음과 같이"<<size<<"명입니다."<<endl;
    for (int i=0; i<size; i++){
        cout << p[i].getName()<<endl;
    }
}

Family::Family(string name, int size){
    p = new Person[size];
    this -> name = name;
    this -> size = size;
}

Family::~Family(){
    delete p;
}


int main(){
    Family *simpson = new Family("Simpson", 3);
    simpson -> setName(0,"mr. simpson");
    simpson -> setName(1,"mrs. simpson");
    simpson -> setName(2,"Bart. simpson");
    simpson -> show();
    delete simpson;
}