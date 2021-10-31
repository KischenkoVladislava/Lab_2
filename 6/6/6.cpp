#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите число от 1 до 100"<<endl;
    cin >> N;
    while ((N < 1) || (N > 100))
    {
        cout << "Нужно ввести число от 1 до 100. Введите число еще раз" << endl;
        cin >> N;
    }
    if (N % 10 == 1)
    {
        cout << N <<" год";
    }
    if ((N % 10 == 2) || (N % 10 == 3) || (N % 10 == 4))
    {
        cout << N << " года";
    }
    if ((N % 10 == 5) || (N % 10 == 6) || (N % 10 == 7) || (N % 10 == 8) || (N % 10 == 9) || (N % 10 == 0))
    {
        cout << N << " лет";
    }
    return 0;
}

