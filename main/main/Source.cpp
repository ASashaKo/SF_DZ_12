#include <iostream>
#include <string>
using namespace std;

bool IskPeriodic(string& stroka, int k)
{
    int len_stroki = stroka.length();


    if (k == 0) {
        cout << "Коэффициент кратности не может быть равен 0. Выберите другое значение" << endl;
        return false;
    }
    if (k == 1) {
        cout << "Ваша подстрока состоит из одного символа. Введите число больше" << endl;
        return false;
    }
    if (len_stroki == 0) {
        cout << "Строка пуста" << endl;
        return false;
    }
    if (k > len_stroki) {
        cout << "Коэффициент кратности не может быть больше длинны строки" << endl;
        return false;
    }
    if (len_stroki % k != 0) {
        cout << "Длинна строки не соответствует кратности" << endl;
        return false;
    }

    string pod_stroka = stroka.substr(0, k);
    int counter = 0;
    for (int i = 0; i < len_stroki; i += k)
    {
        if (pod_stroka == stroka.substr(i, k)) {
            counter++;
        }
        else {
            cout << "Совпадающих подстрок заданной кратности нет" << endl;
            return false;
        }
    }
    cout << "Количество подстрок " << pod_stroka << " составляет " << counter << endl;
    return true;
}

int main()
{
    system("chcp 1251");
    cout << "Введите строку латинсих букв без пробелов и нажмите ENTER" << endl;
    string stroka;
    getline(cin, stroka);

    cout << "Введите коэффициент кратности" << endl;
    int k;
    cin >> k;
    IskPeriodic(stroka, k);
    return 0;
}
