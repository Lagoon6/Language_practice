#include <iostream>
using namespace std;

class Matrix{
    int num[4];
public:
    Matrix(int a, int b, int c, int d){
        num[0] = a; num[1] = b;
        num[2] = c; num[3] = d;
    }
    Matrix(){;}
    friend Matrix operator + (Matrix a, Matrix b);
    friend void operator +=(Matrix &a, Matrix&b);
    friend bool operator ==(Matrix a, Matrix b);
    void show(){
        cout<< "Matrix = {";
        for(int i=0; i<4; i++){
            cout<< this->num[i]<<" ";
            }
        
        cout<<"}"<<endl;
    }
};

Matrix operator +(Matrix a, Matrix b){
    Matrix temp;
    for(int i=0; i<4; i++){
        temp.num[i] = a.num[i]+b.num[i];
    }
    return temp;
}

void operator +=(Matrix& a, Matrix& b){
    for(int i=0; i<4; i++){
        a.num[i]+=b.num[i];
    }
}


bool operator ==(Matrix a, Matrix b){
    for(int i=0; i<4; i++){
        if(a.num[i]==b.num[i]);
        
        else return false;
    }
    return true;
}

int main(){
    Matrix a(1,2,3,4), b(2,3,4,5), c;
    c= a+b;
    a += b;
    a.show(); b.show(); c.show();
    if (a==c){
        cout<<"a and c are the same"<<endl;
    }
}