#include <iostream>
#include "Helpers.h"
#include <string>
#include "Stack.cpp"

using namespace std;

class Example
{
private:
    string text = "something";

public:
    string getText()
    {
        return text;
    }
};

int main()
{
    int size = 5;
    Stack stack(size);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    // stack.push(60);

    for (int i = 0; i < size - 1; i++)
    {
        cout << stack.pop() << ' ';
    }
    cout << "\n" << stack.peek() << ' ';
    cout << "\n" << stack.pop() << ' ';
}
