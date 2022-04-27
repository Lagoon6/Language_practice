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
    Book& operator +=(int n);
    Book& operator -=(int n);
};

Book& Book::operator+=(int n){
    b += n;
    return *this; 
}

Book& Book::operator-=(int n){
    b -= n;
    return *this; 
}



int main(){
    Book a("청춘",20000, 300), b("미래",30000,500);
    a +=500;
    b -=500;
    a.show();
    b.show();
}