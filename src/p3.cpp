// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 2)
        return true;
    for (int j = 2; j < n; j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i * 2 <= n; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            cout << i << ' ' << n - i;
            break;
        }
    }

    return 0;
}
