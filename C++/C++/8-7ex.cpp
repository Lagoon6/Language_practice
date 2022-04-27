#include<iostream>
using namespace std;

class Adder{
protected:
    int add(int a, int b) {return a+b;}
};

class Subtractor{
protected:
    int minus(int a, int b){return a-b;}
};

class Multi{
protected:
    int multi(int a, int b){return a*b;}
};

class Divi{
protected:
    int divi(int a, int b){
        if (b==0){
            cout << "0으로 나누기 오류 발생"<<endl;
            return -1;
        }
        return a/b;}
};

class Calculator:public Adder, public Subtractor, public Multi, public Divi{
public:
    int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b){
    int res=0;
    switch(op){
        case '+': res = add(a,b); break;
        case '-': res = minus(a,b); break;
        case '*': res = multi(a,b); break;
        case '/': res = divi(a,b); break;
    }
    return res;
}

int main(){
    Calculator handCalculator;
    cout << "2 + 4 =" << handCalculator.calc('+',2,4)<<endl;
    cout << "100-8 =" << handCalculator.calc('-',100,8)<<endl;
    cout << "7*9 =" << handCalculator.calc('*',7,9)<<endl;
    cout << "25/5 =" << handCalculator.calc('/',25,5)<<endl;
    cout << "25/0 =" << handCalculator.calc('/',25,0)<<endl;
 }

