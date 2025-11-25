#include <iostream>
using namespace std;

// 印出 d 層縮排
void print_level(int d) {
    for (int i = 0; i < d; i++) {
        cout << "|--";
    }
}

int fib(int n, int depth)
{
    print_level(depth);
    cout << "SEARCH fib(" << n << ")\n";

    // base cases
    if (n == 0) {
        print_level(depth);
        cout << "GET fib(" << n << ") = 0\n";
        return 0;
    }
    if (n == 1) {
        print_level(depth);
        cout << "GET fib(" << n << ") = 1\n";
        return 1;
    }

    // recursive calls
    int a = fib(n - 1, depth + 1);
    int b = fib(n - 2, depth + 1);

    print_level(depth);
    cout << "GET fib(" << n << ") = " << a + b << "\n";

    return a + b;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n, 0) << endl;
}
