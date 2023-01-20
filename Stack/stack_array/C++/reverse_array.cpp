#include <iostream>
#include <stack> // stack from standard template library (STL)
#include <cstring>
using namespace std;

void Reverse(char C[], int n)
{
    stack<char> S;
    // loop for push
    for (int i = 0; i < n; i++)
    {
        S.push(C[i]);
    }
    // loop for pop
    for (int i = 0; i < n; i++)
    {
        C[i] = S.top(); // overwrite the character at index i;
        S.pop(); // perform top.
    }
}

int main()
{
    char C[51];
    cout << "Enter a string: ";
    cin >> C;
    Reverse(C, strlen(C));
    cout << "Output = " << C << endl;
    return 0;
}
