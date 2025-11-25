// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;
void print(int n)
{
    if (n != 0)
    {
        cout << "|--";
        print(n - 1);
    }
}

int fib(int n, int c)
{

    if (n == 2)
    {
        print(c - n);
        cout << "SEARCH fib(" << n << ')' << endl;
        print(c - n);
        cout << "GET fib(" << n << ") = 1" << endl;
        return 1;
    }
    else if (n == 1)

    {
        print(c - n - 1);
        cout << "SEARCH fib(" << n << ')' << endl;
        print(c - n - 1);
        cout << "GET fib(" << n << ") = 1" << endl;
        return 1;
    }

    else
    {
        print(c - n);
        cout << "SEARCH fib(" << n << ')' << endl;
        int j = fib(n - 1, c);
        int m = fib(n - 2, c);
        print(c - n);
        cout << "GET fib(" << n << ") = " << j << endl;
        return j + m;
    }
}

int main()
{
    int n;
    cin >> n;
    int c = n;
    cout << fib(n, c) << endl;
    return 0;
}
