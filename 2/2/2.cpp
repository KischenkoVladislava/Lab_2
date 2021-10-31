#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double pi = 4, d = 3, n;
    cout << "Введите количество слагаемых " << endl;
    cin >> n;
    for (int i=0; i < n-1 ; i++)
    {
        if (i % 2 != 0)
        {
            pi = pi + (4 / d);
            d = d + 2;
        }
        else
        {
            pi = pi - (4 / d);
            d = d + 2;
        }
    }
    cout << pi;
}
