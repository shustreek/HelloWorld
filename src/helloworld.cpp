#include <iostream>
#include "Helpers.h"
#include <string>
#include "Vector.cpp"

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
    Example example;
    Vector vector;
    cout << example.getText() << "\n";
    vector.Show();
    cout << "vector length: " << vector.Length() << "\n";
}
