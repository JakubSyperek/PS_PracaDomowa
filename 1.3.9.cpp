#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b;
    int dzialanie;
    do
    {
        cout << endl;
        cout << "Kalkulator" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "5. Potegowanie" << endl;
        cout << "6. Pierwiastkowanie" << endl;
        cout << "7. Wyjscie" << endl;

    cout << "Wybierz numer dzialania: ";
    cin >> dzialanie;

    switch(dzialanie){
    case 1:
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        cout << "a + b = " << a+b << endl;
    break;

    case 2:
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        cout << "a - b = " << a-b << endl;
    break;

    case 3:
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        cout << "a * b = " << a*b << endl;
    break;

    case 4:
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        cout << "a / b = " << a/b << endl;
    break;

    case 5:
        cout << "Podaj podstawe: ";
        cin >> a;
        cout << "Podaj wykladnik: ";
        cin >> b;
        cout << "a^b = " << pow(a,b) << endl;
    break;

    case 6:
        cout << "Podaj a: ";
        cin >> a;
        cout << "Pierwiastek stopnia drugiego wynosi " << sqrt(a) << endl;
    break;

    case 7:
        break;

    default:
        cout << "Podaj inna liczbe. " << endl;
    }
    }while(dzialanie!=7);

    cout << "Koniec" << endl;
    return 0;
}
