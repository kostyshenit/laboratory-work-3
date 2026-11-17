// Лабораторна робота №3 — Завдання 1 (Варіанти 8 і 13)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter a 3-digit positive integer N: ";
    if (!(cin >> N)) {
        N = 479;
        cout << N << endl;
    }

    if (N < 100 || N > 999) {
        cout << "Error: number must be between 100 and 999." << endl;
        return 1;
    }

    int d1 = N / 100;
    int d2 = (N / 10) % 10;
    int d3 = N % 10;

    // Варіант 8: кількість непарних цифр
    int oddCount = 0;
    if (d1 % 2 != 0) oddCount++;
    if (d2 % 2 != 0) oddCount++;
    if (d3 % 2 != 0) oddCount++;

    // Варіант 13: перестановка першої і останньої цифр
    int swapped = d3 * 100 + d2 * 10 + d1;

    cout << "Digits: " << d1 << ", " << d2 << ", " << d3 << endl;
    cout << "Variant 8 (odd digits count): " << oddCount << endl;
    cout << "Variant 13 (swapped first and last): " << swapped << endl;
    return 0;
}
