#include <iostream>
#include <string>
using namespace std;

class Book{
    string a;
    int b, c;
public:
    Book(string a="", int b =0, int c=0 ){
        this->a= a;
        this->b= b;
        this->c= c;
    }
    void show(){
        cout<<a<<" "<<b<<"원 "<<c<<"페이지"<<endl;
    }
    string returna(){ return a;}
    friend Book operator +=(Book& f,int n);
    friend Book operator -=(Book& f,int n);
};

Book operator+=(Book& f,int n){
    f.b +=n;
    return f; 
}

Book operator-=(Book& f,int n){
    f.b -=n;
    return f; 
}





int main(){
    Book a("청춘",20000, 300), b("미래",30000,500);
    a +=500;
    b -=500;
    a.show();
    b.show();
}