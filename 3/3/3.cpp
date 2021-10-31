#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int f[100];
    int n = 0;
    f[0] = 1;
    f[1] = 1;
    for (int i=2; i < 100; i++)
    {
        f[i] = f[i-1] + f[i-2];
       if ((f[i] > 999) && (f[i] < 10000))
        {
            n = n + 1;  
        }   
    }
    cout << "Количество четырехзначных чисел в ряде Фибоначчи: " << n;
    return 0;
}
