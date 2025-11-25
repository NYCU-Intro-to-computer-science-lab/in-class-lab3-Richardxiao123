#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        cout << "Move ring " << n << " from " << from << " to " << to << endl;
        cout << "Move ring " << n << " from " << to << " to " << aux << endl;
    }
    else
    {
        hanoi(n - 1, from, to, aux);
        cout << "Move ring " << n << " from " << from << " to " << to << endl;
        hanoi(n - 1, aux, to, from);
        cout << "Move ring " << n << " from " << to << " to " << aux << endl;
        hanoi(n - 1, from, to, aux);
    }
}

int main()
{
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
}
