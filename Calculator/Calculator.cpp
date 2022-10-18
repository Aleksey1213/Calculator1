#include <iostream>
using namespace std;

int main()
{
    int n, type, x, i, res;

    setlocale(0, "");

    cout << "Выберите операцию для последовательно вводимых цифр:\n\
    1 - сложение\n\
    2 - вычитание\n\
    3 - умножение\n\
    4 - деление" << endl;
    cin >> type;

    cout << "Введите количество чисел" << endl;
    cin >> n;

    i = 0;
    res = 0;

    while (i < n)
    {
        cout << "Введите число: " << endl;
        cin >> x;

        switch (type)
        {
            case 1: {
                res = res + x;
                break;
            }
            case 2: {
                res = res - x;
                break;
            }
            case 3: {
                res = res * x;
                break;
            }
            case 4: {
                res = res / x;
                break;
            }
        }
        i += 1;
    }

    cout << "Результат: " << res << endl;

    return 0;
}
