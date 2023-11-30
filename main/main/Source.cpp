#include <iostream>
#include <string>
using namespace std;

bool IskPeriodic(string& stroka, int k)
{
    int len_stroki = stroka.length();


    if (k == 0) {
        cout << "����������� ��������� �� ����� ���� ����� 0. �������� ������ ��������" << endl;
        return false;
    }
    if (k == 1) {
        cout << "���� ��������� ������� �� ������ �������. ������� ����� ������" << endl;
        return false;
    }
    if (len_stroki == 0) {
        cout << "������ �����" << endl;
        return false;
    }
    if (k > len_stroki) {
        cout << "����������� ��������� �� ����� ���� ������ ������ ������" << endl;
        return false;
    }
    if (len_stroki % k != 0) {
        cout << "������ ������ �� ������������� ���������" << endl;
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
            cout << "����������� �������� �������� ��������� ���" << endl;
            return false;
        }
    }
    cout << "���������� �������� " << pod_stroka << " ���������� " << counter << endl;
    return true;
}

int main()
{
    system("chcp 1251");
    cout << "������� ������ �������� ���� ��� �������� � ������� ENTER" << endl;
    string stroka;
    getline(cin, stroka);

    cout << "������� ����������� ���������" << endl;
    int k;
    cin >> k;
    IskPeriodic(stroka, k);
    return 0;
}
