// practice_230124.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");
    

    double num1, num2, result;
    int ch;

    do {
        cout << "\n-------------------------------------";
        cout << "\n        >> КАЛЬКУЛЯТОР << ";
        cout << "\n-------------------------------------";
        cout << "\nВыберите действие из менюшки: ";
        cout << "\n1. Сложение";
        cout << "\n2. Вычитание";
        cout << "\n3. Частное";
        cout << "\n4. Произведение";
        cout << "\n5. Возведение в степень";
        cout << "\n6. Нахождение квадратного корня";
        cout << "\n7. Нахождение 1 процента от числа";
        cout << "\n8. Найти факториал от числа";
        cout << "\n9. Выйти из программы";
        cout << "\n-------------------------------------";
        cout << "\n";

        cin >> ch;

        switch (ch) {
        case 1:
            cout << "\nВведите два числа: \n";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "\nРезультат сложения --> " << result;
            break;
        case 2:
            cout << "\nВведите два числа: \n";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "\nРезультат вычитания --> " << result;
            break;
        case 3:
            cout << "\nВведите два числа: \n";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "\nРезультат деления --> " << result ;
            }
            else {
                cout << "\nОшибка: деление на 0!";
            }
            break;
        case 4:
            cout << "\nВведите два числа: \n";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "\nРезультат умножения -->" << result;
            break;
        case 5:
            cout << "\nВведите число для возведения в степень и саму степень, в которую хотите возвести число: \n";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "\nРезультат нахождения степени числа --> " << result;
            break;
        case 6:
            cout << "\nВведите число: \n";
            cin >> num1;
            result = sqrt(num1);
            cout << "\nРезультат извлечения квадратного корня --> " << result;
            break;
        case 7:
            cout << "\nВведите число: \n";
            cin >> num1;
            result = num1 / 100;
            cout << "\nРезультат нахождения процента от числа --> " << result;
            break;
        case 8:

            cout << "\nВведите число: \n";
            cin >> num1;
            result = 1;

            for (int i = 1; i <= num1; i++) {
                result *= i;
            }

            cout << "\nРезультат нахождения факториала --> " << result;
            break;
        case 9:
            cout << "\n----------------------------------";
            cout << "\nВы завершили работу с программой!";
            cout << "\n----------------------------------";
            break;
        default:
            cout << "\nУпс, такого числа в менюшке нет, попробуйте ещё раз!\n";
        }
    } while (ch != 9);

    return 0;
}



