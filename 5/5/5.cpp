#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int N, x, y, z;
    cout << "Введите натуральное число" << endl;
    cin >> N;
    while (N <= 0)
    {
        cout << "Это не натуральное число. Введите натуральное число" << endl;
        cin >> N;
    }
    int a = 0;
    for (x = 1; x * x * x < N; x++)
    {
        for (y = 1; y * y * y < N; y++)
        {
            for (z = 1; z * z * z < N; z++)
            {
                if (x * x * x + y * y * y + z * z * z == N)
                {
                    cout << "x = " << x << " y = " << y << " z = " << z << endl;
                    a = 1;
                }
            }
        }
    }
    if (a == 0)
        cout << "No such combinations!";
    return 0;
}
