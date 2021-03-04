#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d;
    float d0, d1, d2;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    cout << a << "x^2+"<< b << "x+" << c << endl;

    d = (pow(b,2) - (4*a*c));
    cout << "d = " << d << endl;
    if (d < 0)
        cout << "Rownanie nie posiada rozwiazania." << endl;
    else
    {
        if (d==0)
        {
            d0=(-(b)/(2*a));
            cout << "Rownanie posiada jedno rozwiazanie: " << d0 << endl;
        }
        else
        {
            d1=((-b - (-sqrt(b)))/2*a);
            d2=((-b + (-sqrt(b)))/2*a);
            cout << "Rownanie posiada dwa rozwiazania: " << d1 << " i " << d2 << endl;
        }
    }
    return 0;
}
