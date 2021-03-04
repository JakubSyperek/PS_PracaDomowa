#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2, liczba3;
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    cout << "Podaj trzecia liczbe: ";
    cin >> liczba3;
    if ((liczba1 == liczba2) && (liczba1 == liczba3))
    {
        cout << "Wszystkie trzy liczby sa rowne. ";
    }
    else
    {
        if((liczba1 > liczba2) && (liczba1 > liczba3))
        {
            cout << "Liczba pierwsza jest najwieksza." << endl;
        }
        if((liczba2 > liczba1) && (liczba2 > liczba3))
        {
            cout << "Liczba druga jest najwieksza." << endl;
        }
        if((liczba3 > liczba1) && (liczba3 > liczba2))
        {
            cout << "Liczba trzecia jest najwieksza." << endl;
        }
        if((liczba1 > liczba2) && (liczba1 == liczba3))
        {
            cout << "Liczby pierwsza i trzecia sa najwieksze." << endl;
        }
        if((liczba2 > liczba1) && (liczba2 == liczba3))
        {
            cout << "Liczby druga i trzecia sa najwieksze." << endl;
        }
        if((liczba1 > liczba3) && (liczba1 == liczba2))
        {
            cout << "Liczby pierwsza i trzecia sa najwieksze." << endl;
        }
    }
    return 0;
}
