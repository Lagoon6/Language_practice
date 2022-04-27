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
    Matrix operator + (Matrix b);
    Matrix operator +=(Matrix &b);
    bool operator ==(Matrix b);
    void show(){
        cout<< "Matrix = {";
        for(int i=0; i<4; i++){
            cout<< this->num[i]<<" ";
            }
        
        cout<<"}"<<endl;
    }
};

Matrix Matrix::operator +(Matrix b){
    Matrix temp;
    for(int i=0; i<4; i++){
        temp.num[i] = this->num[i]+b.num[i];
    }
    return temp;
}

Matrix Matrix::operator +=(Matrix& b){
    for(int i=0; i<4; i++){
        this->num[i]+=b.num[i];
    }
    return *this;
}


bool Matrix::operator ==(Matrix b){
    for(int i=0; i<4; i++){
        if(this->num[i]==b.num[i]);
        
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