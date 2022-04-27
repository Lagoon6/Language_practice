#include <iostream>
using namespace std;

//더하기
class Add{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

void Add::setValue(int x, int y){
    a = x;
    b = y;
}
int Add::calculate(){
    return a+b;
}

//빼기
class Sub{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();  
};

void Sub::setValue(int x, int y){
    a = x;
    b = y;
}
int Sub::calculate(){
    return a-b;
}

//곱하기
class Mul{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();  
};

void Mul::setValue(int x, int y){
    a = x;
    b = y;
}
int Mul::calculate(){
    return a*b;
}

//나누기
class Div{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();  
};

void Div::setValue(int x, int y){
    a = x;
    b = y;
}
int Div::calculate(){
    return a/b;
}

int main(){
    Add a;
    Sub s;
    Mul m;
    Div d;
    int x, y;
    char op;

    while(true){
        cout <<"연산자와 두개의 정수를 입력 하세요";
        cin >> op >> x >> y;
        if(op == '+'){
            a.setValue(x,y);
            cout<<"값은"<<a.calculate()<<endl;

        }
        else if(op == '-'){
            s.setValue(x,y);
            cout<<"값은"<<s.calculate()<<endl;
        
        }
        else if(op == '*'){
            m.setValue(x,y);
            cout<<"값은"<<m.calculate()<<endl;
       
        }
        else if(op == '/'){
            d.setValue(x,y);
            cout<<"값은"<<d.calculate()<<endl;
       
        }
        else{
            cout <<"연산자부터 입력하시오"<<endl;
        }
    }

}
