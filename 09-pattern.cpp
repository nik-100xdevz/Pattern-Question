#include <bits/stdc++.h>
using namespace std;
void pyramid(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << "-";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << '-';
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << "-";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << '-';
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    pyramid(n);

    return 0;
}