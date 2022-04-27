#include<iostream>
#include<string>
using namespace std;

int main(){
    string yes;
    while(true){
        cout<<"종료하고싶으면 yes를 입력하세요";
        getline(cin,yes);
        if (yes=="yes"){
            cout<<"종료합니다";
            break;
        }
    }
}