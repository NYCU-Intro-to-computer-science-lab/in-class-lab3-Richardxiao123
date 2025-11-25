#include <iostream>
using namespace std;

void print(int n)
{
    if (n > 0)
    {
        cout << "|--";
        print(n - 1);
    }
}

int fib(int n, int c)
{
    if (n == 2)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }

    else
    {
        print(c + 1);
        cout << "SEARCH fib(" << n - 1 << ")\n";
        int x = fib(n - 1, c + 1);
        print(c + 1);
        cout << "GET fib(" << n - 1 << ") = " << x << endl;

        print(c + 1);
        cout << "SEARCH fib(" << n - 2 << ")\n";
        int y = fib(n - 2, c + 1);
        print(c + 1);
        cout << "GET fib(" << n - 2 << ") = " << y << endl;
        return x + y;
    }
}

int main()
{
    int n;
    cin >> n;
    int c = 0;
    cout << "SEARCH fib(" << n << ")\n";
    int a = fib(n, c);
    cout << "GET fib(" << n << ") = " << a << endl;
    cout << a << endl;
}

