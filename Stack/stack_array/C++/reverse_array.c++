// string reversal using stack
#include <iostream>
#include <stack> // stack from standard template library (STL)
using namespace std;
class Stack
{
    private:
        char A[101];
        int top;
    public:
        void Push(int x);
        void Pop();
        int Top();
        bool isEmpty();
};

void Reverse(char C[], int n)
{
    stack<>
}

int main()
{
    char C[51];
    printf("Enter a string: ");
    gets(C);
    Reverse(C, strlen(C));
    printf("Output = %s", C);
}