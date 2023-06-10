#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    int a;
    cout << "Введите значение a: ";
    cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }
    cout << "Сумма чисел от " << a << " до 500: " << sum << "\n";
    cout << "\n";

    //Task_2
    int x, y;
    cout << "Введите целое число x: ";
    cin >> x;

    cout << "Введите целое число y: ";
    cin >> y;

    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    cout << x << " в степени " << y << " = " << result << "\n";
    cout << "\n";

    //Task_4
    int a_1;
    cout << "Введите значение a : ";
    cin >> a_1;

    int product = 1;
    for (int i = a_1; i <= 20; ++i) {
        product *= i;
    }
    cout << "Произведение чисел от " << a_1 << " до 20: " << product << "\n";
    cout << "\n";
    //Task_5
    int k;
    cout << "Введите номер варианта: ";
    cin >> k;

    cout << "Таблица умножения на " << k << ":\n";
    for (int i = 1; i <= 10; ++i) {
        int result = i * k;
        cout << i << " * " << k << " = " << result << "\n";
    }
    cout << "\n";
}
