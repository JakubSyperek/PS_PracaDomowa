#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned short n;
    int i,a,b;
    cout << "Podaj liczbe: ";
    cin >> n;
    for(i=0;i<=n;i++)
    {
        a = pow(i,2);

        cout << a << endl;
        b += a;

    }

    cout << "Wynik = " << b-16 << endl;
    return 0;
}
