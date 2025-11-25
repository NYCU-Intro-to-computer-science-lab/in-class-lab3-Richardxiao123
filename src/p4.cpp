#include <iostream>
using namespace std;

void printIndent(int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "|--";
    }
}

int fib(int n, int depth)
{
    printIndent(depth);
    cout << "SEARCH fib(" << n << ")\n";

    if (n == 1 || n == 2) {
        printIndent(depth);
        cout << "GET fib(" << n << ") = 1\n";
        return 1;
    }

    int a = fib(n - 1, depth + 1);

    printIndent(depth);
    cout << "GET fib(" << n - 1 << ") = " << a << "\n";

    int b = fib(n - 2, depth + 1);

    printIndent(depth);
    cout << "GET fib(" << n - 2 << ") = " << b << "\n";

    printIndent(depth);
    cout << "GET fib(" << n << ") = " << a + b << "\n";

    return a + b;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n, 0) << endl;
    return 0;
}

