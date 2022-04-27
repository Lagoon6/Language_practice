#include<iostream>
using namespace std;
#include<string>


int main() {
	string song("Falling in love with you");
	string elvis("Elvis Presely");
	string singer;

	cout << song + "를 부른 가수는";
	cout << "(힌트:첫글자는" << elvis[0] << "?";

	getline(cin, singer);
	if (singer == elvis) {
		cout << "맞았습니다";
	}
	else {
		cout << "틀렸습니다" + elvis + "입니다" << endl;
	}

}