//このプログラムはあくまでも現代の一般的な寿命に基づいた推定を行うものであり、実際の寿命を保証するものではありませんし、なんの医学的目的も持ちません。
//使用に際しては自己責任でお願いします。
//私はこっちのほうが今日を生きようって思うようなポジティブな方向に作用するので、作り、同じ人いたら共感できるかな程度です。参考程度に楽しんでください。
//#include "extending_lifespan_methods_one_by_by_v1.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;
//18時から書きます。題材は、若いとされる年齢の過ごし方と、時間が実際にどれくらい残っているのか、それは何日で何％くらいの時間をデスクで過ごして、何を読んで、何をして、など、実際に数値に基づいて書きます。必要があればcsvファイルを読み書きします。よろしくおねがいします。
void theTimeConsiderAsaYoungerAge() {
    // Implement the logic for considering time as a younger age here
}

void message() {
    cout << "====================" << endl;
    cout << "message function called." << endl;
    char a[32];
    for (int i = 0; i < 32; ++i) {
        a[i] = 'N'; // 'NULL' is not a valid char, using 'N' as a placeholder
    }
    cout << "Hear my message. y or n: ";
    cin >> a[0];
    if (a[0] == 'y' || a[0] == 'Y') {
        cout << "Choosing a positive message for you..." << endl;
        cout << "Slow or rush? y or n: ";
        cin >> a[1];
        if (a[1] == 'y' || a[1] == 'Y') {
            cout << "Well, seems you really rushing huh ? \nIs it even your emergency ?" << endl;
            cout << "Do you need call the ambulance or smth? y or n: ";
            cin >> a[2];
            if (a[2] == 'y' || a[2] == 'Y') {
                cout << "Calling the ambulance...\nIf you drive, please be careful." << endl;
            }else{
                cout << "Slow down. life isnt racing I think.\n Jog is so refreshing." << endl;
            }
        }else{
            cout << "You chose not to slow down." << endl;
            cout << "This programs v1.0 is only compatible so far.\n Please waiting for release of future versions." << endl;
        }
    } else {
        cout << "Message skipped." << endl;
    }
}

void lifespan(const tm* localTime) {
    //cout << "Lifespan function called." << endl;
    cout << "Peek my lifespan. y or n: ";
    char response[2];
    int L_year = 82; // 仮の寿命年数を設定  
    for (int i = 0; i < 2; ++i) {
        response[i] = 'N'; // 'NULL' is not a valid char, using 'N' as a placeholder
    }
    cin >> response[0];
    if (response[0] == 'y' || response[0] == 'Y') {
        cout << "How old are you? : ";
        double age = 0;
        double num_get = 0;
        cin >> age;
        L_year = L_year - age; // 仮の計算: 現在の年から寿命を引く
        L_year = L_year - (localTime->tm_year + 1900 - 2024); // 仮の計算: 現在の年から寿命を引く
        //double L_year2 = 82;

        int daysSpentThisYear = localTime->tm_yday + 1; // 今年経過した日数（1月1日を1日目とする）
        int daysLeftThisYear = 365 - daysSpentThisYear; // 今年の残り日数
        double L_year2 = 80;
        const long long estimatedTotalDays = static_cast<long long>(L_year2) * 365;
        const long long livedDays = static_cast<long long>(age * 365) + daysSpentThisYear;
        const long long totalRestDays = estimatedTotalDays - livedDays; // 残りの人生の総日数

        cout << "====================" << endl;
        cout << "Lifespan function called." << endl;
        cout << "Lifespan function results:" << endl;
        cout << "My estimated total lifespan is " << L_year2 << " years." << endl;
        cout << "My approximately remaining lifespan is " << L_year << " years." << endl;
        cout << "My approximately remaining lifespan in days is " << totalRestDays << " days." << endl;
        cout << "Which means I spent approximately " << (livedDays * 100.0) / estimatedTotalDays << " percent of my life." << endl;
        cout << "You have lived approximately " << age* 365 << " days." << endl;
        cout << "Which means you have approximately " << totalRestDays * 100 / ((L_year + age) * 365) << " percent of your life left." << endl;
        //cout << "You have spent " << daysSpentThisYear << " days this year." << endl;
        //cout << "You have " << daysLeftThisYear << " days left this year." << endl;
        cout << "====================" << endl;
        cout <<"Peek this year's value? (y/n): ";
        cin >> response[2];
        if(response[2] == 'y' || response[2] == 'Y') {
            cout << "====================" << endl;
            cout << "I spent " << livedDays << " days this year." << endl;
            cout << "I have approximately " << totalRestDays << " days left this year." << endl;
            cout << "I have approximately " << totalRestDays * 100 / estimatedTotalDays << " percent of my life remains." << endl;
            cout << "I have approximately " << totalRestDays * 100 / estimatedTotalDays << " percent of my life left." << endl;
        } else {
            cout << "This year value peeking function canceled." << endl;
        }
        //18時から書きます。題材は、若いとされる年齢の過ごし方と、時間が実際にどれくらい残っているのか、それは何日で何％くらいの時間をデスクで過ごして、何を読んで、何をして、など、実際に数値に基づいて書きます。必要があればcsvファイルを読み書きします。よろしくおねがいします。

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
    //message();
    lifespan(localTime);
    return 0;
}