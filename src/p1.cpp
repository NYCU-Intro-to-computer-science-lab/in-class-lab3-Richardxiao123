// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return factorial(n - 1) * n;
}

long long sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return sum(n - 1) + n;
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        cout << 0 << endl;
    }
    else
    {
        cout << factorial(n) << endl;
        cout << sum(n) << endl;
    }
    return 0;
}
