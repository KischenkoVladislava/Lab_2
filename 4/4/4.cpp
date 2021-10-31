#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "Russian");
	double x, q, cos, n, x2, zn, fact;
    int count;
    cout << "Введите x и q" << endl;
    cin >> x >> q;
    cos = 1;
    count = 1;
    zn = -1; // (-1)^n, zn - знак
    x2 = x * x; // x^(2n) 
    fact = 2; // (2n)!, fact - факториал 
    n = 2;
    while ((x2/fact) >= q )
    {
            cos = cos + zn*x2/fact;
            count = count + 1;
            n = n + 2;
            x2 = x2 * x * x;
            fact = fact * (n - 1) * n;
            zn = zn * (-1);
    }
    cout << "cos(x) = " << cos << endl << "Количество учтенных слагаемых: " << count;
    return 0;
}

