// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    return n == 0 ? m : gcd(m % n, n);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m) << endl;
}
