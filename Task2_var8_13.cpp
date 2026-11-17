// Лабораторна робота №3 — Завдання 2 (Варіанти 8 і 13, оператор switch)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;

    // Варіант 8: номер місяця -> назва двома мовами
    int month;
    cout << "Enter month number (1-12): ";
    if (!(cin >> month)) {
        month = 8;
        cout << month << endl;
    }

    cout << "Variant 8: ";
    switch (month) {
        case 1:  cout << "January / Sichen" << endl; break;
        case 2:  cout << "February / Lyutyi" << endl; break;
        case 3:  cout << "March / Berezen" << endl; break;
        case 4:  cout << "April / Kviten" << endl; break;
        case 5:  cout << "May / Traven" << endl; break;
        case 6:  cout << "June / Cherven" << endl; break;
        case 7:  cout << "July / Lypen" << endl; break;
        case 8:  cout << "August / Serpen" << endl; break;
        case 9:  cout << "September / Veresen" << endl; break;
        case 10: cout << "October / Zhovten" << endl; break;
        case 11: cout << "November / Lystopad" << endl; break;
        case 12: cout << "December / Hruden" << endl; break;
        default: cout << "Invalid month number" << endl; break;
    }

    // Варіант 13: телефонний код -> назва оператора (вибір із 9 кодів >= 7)
    int code;
    cout << "Enter mobile operator code (67, 68, 96, 97, 50, 66, 63, 73, 93): ";
    if (!(cin >> code)) {
        code = 67;
        cout << code << endl;
    }

    cout << "Variant 13: ";
    switch (code) {
        case 67:
        case 68:
        case 96:
        case 97:
            cout << "Kyivstar" << endl;
            break;
        case 50:
        case 66:
            cout << "Vodafone" << endl;
            break;
        case 63:
        case 73:
        case 93:
            cout << "lifecell" << endl;
            break;
        default:
            cout << "Unknown operator code" << endl;
            break;
    }

    return 0;
}
