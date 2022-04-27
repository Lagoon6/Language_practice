#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char yes[100];
    while(true){
        cout<<"종료하고싶으면 yes를 입력하세요";
        cin.getline(yes,100);
        if(strcmp(yes,"yes")==0){
            cout<<"종료합니다";
            break;
        }
    }
}
