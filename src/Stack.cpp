#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Stack
{
private:
    int *stack;
    int *first;
    int *last;

public:
    Stack() : Stack(5)
    {
    }

    Stack(const int &_size)
    {
        stack = new int[_size];
        first = &stack[0];
        last = &stack[_size];
    }

    void push(const int &_item)
    {
        if (stack != last)
        {
            *stack = _item;
            stack++;
        }
        else
        {
            throw out_of_range("Stack is full!");
        }
    }

    int pop()
    {
        const int item = peek();
        stack--;
        return item;
    }

    int peek()
    {
        if (stack != first)
        {
            return *(stack - 1);
        }
        else
        {
            throw length_error("Stack is empty!");
        }
    }
};
