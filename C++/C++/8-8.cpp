#include<iostream>
#include<string>
using namespace std;

class printer {
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
public:
    printer(string m, string ma, int a) {
        model = m;
        manufacturer = ma;
        availableCount = a;
    }
    string getModel() { return model; }
    string getManu() { return manufacturer; }
    int getAvail() { return availableCount; }
    bool print(int pages) {
        printedCount = pages;
        if (availableCount >= printedCount) {
            availableCount -= printedCount;
            return true;
        }
        else {
            cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
            return false;
        }
    }

};

class Ink : public printer {
    int availableInk;
public:
    Ink(string m, string ma, int a, int aInk) : printer(m, ma, a) {
        availableInk = aInk;
    }
    void printInkjet(int pages) {
        if (print(pages)) {
            if (availableInk >= pages) {
                availableInk -= pages;
                cout << "프린트하였습니다" << endl;
            }

        }
    }
    void show() {
        cout << getModel() << "," << getManu() << ", 남은 종이" << getAvail() << "장, 남은 잉크" << availableInk << endl;
    }
};

class Laser : public printer {
    int availableToner;
public:
    Laser(string m, string ma, int a, int aToner) :printer(m, ma, a) {
        availableToner = aToner;
    }
    void printLaser(int pages) {
        if (print(pages)) {
            if (availableToner >= pages) {
                availableToner -= pages;
                cout << "프린트하였습니다" << endl;
            }
        }
    }
    void show() {
        cout << getModel() << " ," << getManu() << " ,남은 종이" << getAvail() << "장, 남은 토너" << availableToner << endl;
    }
};

int main() {
    Ink* IP = new Ink("Officejet V40", "HP", 5, 10);
    Laser* Lp = new Laser("SCX-6x45", "삼성전자", 3, 20);
    int n1, n2;
    char a;

    cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
    cout << "잉크젯 :"; IP->show();
    cout << "레이저 :"; Lp->show();

    while (1) {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수입력>>";
        cin >> n1 >> n2;
        if (n1 == 1) {
            IP->printInkjet(n2);
            IP->show();
            Lp->show();
        }
        if (n1 == 2) {
            Lp->printLaser(n2);
            IP->show();
            Lp->show();
        }
        cout << "계속 프린트 하시겠습니까? (y/n)>>";
        cin >> a;
        if (a == 'n')break;

    }
}

