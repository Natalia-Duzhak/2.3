//Source.cpp
#include <Windows.h> 
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double N;

    Money a,b, c(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    cout << "��� ����� ������� �������::" << endl;
    cin >> a;
    cout << a << endl << endl;
    cout << "��� ����� ������� �������::" << endl;
    cin >> b;
    cout << b << endl << endl;
 
    cout << "��������� ���." << endl;
    a.Add(b);
    cout << a << endl << endl;
    cout << "³������� ���." << endl;
    a.Sub(b);
    cout << a << endl << endl;
    
    cout << "������� = ";
    cin >> N;
    cout << "�������� ���� �� ������� �����." << endl;
    a.Dob(b, N);
    cout << a << endl << endl;
    
    Money t3;
    cout << "m3 = " << c << endl;
    t3 = ++c;
    cout << "m3 = ++m2: \n" << "m2 = " << c << "m3 = " << t3 << endl;
    t3 = --c;
    cout << "m3 = --m2: \n" << "m2 = " << c << "m3 = " << t3 << endl;
    t3 = c++;
    cout << "m3 = m2++: \n" << "m2 = " << c << "m3 = " << t3 << endl;
    t3 = c--;
    cout << "m3 = m2--: \n" << "m2 = " << c << "m3 = " << t3 << endl;

    return 0;
}