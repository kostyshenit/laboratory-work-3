// Лабораторна робота №3. Програмування алгоритмів з розгалуженням
// Студент: Костишен Артемій Володимирович | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;

    // Завдання 1 (Варіанти 8 і 13)
    {
        int N;
        cout << "\n--- Task 1 (Variants 8 and 13) ---\nEnter a 3-digit positive integer N: ";
        if (!(cin >> N)) {
            N = 479;
            cout << N << endl;
        }
        if (N >= 100 && N <= 999) {
            int d1 = N / 100, d2 = (N / 10) % 10, d3 = N % 10;
            int oddCount = 0;
            if (d1 % 2 != 0) oddCount++;
            if (d2 % 2 != 0) oddCount++;
            if (d3 % 2 != 0) oddCount++;
            int swapped = d3 * 100 + d2 * 10 + d1;
            cout << "Odd digits count (var 8): " << oddCount << endl;
            cout << "Swapped digits (var 13): " << swapped << endl;
        } else {
            cout << "Error: N must be a 3-digit positive number." << endl;
        }
    }

    // Завдання 2 (Варіанти 8 і 13)
    {
        int month, code;
        cout << "\n--- Task 2 (Variants 8 and 13) ---\nEnter month number (1-12): ";
        if (!(cin >> month)) {
            month = 8;
            cout << month << endl;
        }
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

        cout << "Enter operator code (67, 68, 96, 97, 50, 66, 63, 73, 93): ";
        if (!(cin >> code)) {
            code = 67;
            cout << code << endl;
        }
        switch (code) {
            case 67: case 68: case 96: case 97: cout << "Kyivstar" << endl; break;
            case 50: case 66:                   cout << "Vodafone" << endl; break;
            case 63: case 73: case 93:          cout << "lifecell" << endl; break;
            default:                            cout << "Unknown operator code" << endl; break;
        }
    }

    return 0;
}
