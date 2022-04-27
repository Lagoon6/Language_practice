#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big){
    if(a == b){
        return true;
    }
    else{
        if(a>b){
            big = a;
        }
        else{
            big = b;
        }
        return false;
    }
}

int main(){
    int a, b, big;
    cout<<"두개의 정수를 입력하세요>>";
    cin >> a >> b;
    if(!bigger(a,b,big))
        cout<<"큰 수는:"<<big;
    
    else{
        cout << "두 정수가 같습니다";
    }
    
}