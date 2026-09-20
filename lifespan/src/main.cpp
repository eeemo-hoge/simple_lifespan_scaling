//このプログラムはあくまでも現代の一般的な寿命に基づいた推定を行うものであり、実際の寿命を保証するものではありませんし、なんの医学的目的も持ちません。
//使用に際しては自己責任でお願いします。
//私はこっちのほうが今日を生きようって思うようなポジティブな方向に作用するので、作り、同じ人いたら共感できるかな程度です。参考程度に楽しんでください。
//#include "extending_lifespan_methods_one_by_by_v1.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;

void lifespan(const tm* localTime) {
    cout << "Lifespan function called." << endl;
    cout << "Peek my lifespan. y or n: ";
    char response[2];
    int L_year = 80; // 仮の寿命年数を設定  
    for (int i = 0; i < 2; ++i) {
        response[i] = 'N'; // 'NULL' is not a valid char, using 'N' as a placeholder
    }
    cin >> response[0];
    if (response[0] == 'y' || response[0] == 'Y') {
        cout << "How old are you? : ";
        double age = 0;
        cin >> age;
        L_year = L_year - age; // 仮の計算: 現在の年から寿命を引く
        L_year = L_year - (localTime->tm_year + 1900 - 2024); // 仮の計算: 現在の年から寿命を引く
        cout << "====================" << endl;
        cout << "Lifespan function results:" << endl;
        cout << "My rest of life is " << L_year << " years." << endl;
        cout << "My estimated lifespan is " << L_year + age << " years." << endl;
        cout << "You have lived " << age << " years." << endl;
    } else {
        cout << "Lifespan peek canceled." << endl;
    }
}

int main() {
    char name[256];
    for (int i = 0; i < 256; ++i) {
        name[i] = '\0';
    }
    cout << "Enter your name: ";
    cin.getline(name, 256);
    cout << "Good morning, " << name << "!" << endl;
    const auto now = chrono::system_clock::now();
    const time_t currentTime = chrono::system_clock::to_time_t(now);
    const tm* localTime = localtime(&currentTime);
    cout << "Today is " << put_time(localTime, "%Y-%m-%d") << endl;
    cout << "Current time is " << put_time(localTime, "%H:%M:%S") << endl;
    lifespan(localTime);
    return 0;
}