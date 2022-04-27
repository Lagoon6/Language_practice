#include <iostream>
#include <string>
using namespace std;

class printer {
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	printer(string m, string ma, int avail) { model = m; manufacturer = ma; availableCount = avail; }
	virtual void print(int pages) = 0;
	virtual void show() = 0;
	int getAvail() { return availableCount; }
};
class InkJetPrinter : public printer {
	int availableInk;
public:
	InkJetPrinter(string m, string ma, int avail, int availInk) : printer(m, ma, avail) {
		availableInk = availInk;
	}
	void print(int pages) {
		printedCount = pages;
		availableCount -= printedCount;
		availableInk -= printedCount;
	}
	void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은 잉크 " << availableInk << endl;
	}
};
class LaserPrinter : public printer {
	int availableToner;
public:
	LaserPrinter(string m, string ma, int avail, int availToner) : printer(m, ma, avail) {
		availableToner = availToner;
	}
	void print(int pages) {
		printedCount = pages;
		availableCount -= printedCount;
		availableToner -= printedCount;
	}
	void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은토너 " << availableToner << endl;
	}
};

int main() {
	InkJetPrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* Laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	int a, b;
	string exit;

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; Ink->show();
	cout << "레이저 : "; Laser->show();

	while (1) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> a >> b;
		if (a == 1) {
			if (b > Ink->getAvail()) {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "프린트하였습니다." << endl;
				Ink->print(b);
				Ink->show();
				Laser->show();
			}
		}
		else if (a == 2) {
			if (b > Laser->getAvail()) {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "프린트하였습니다." << endl;
				Laser->print(b);
				Ink->show();
				Laser->show();
			}
		}
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> exit;y
		if (exit == "n") break;
	}
}
