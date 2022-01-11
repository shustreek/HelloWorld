#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    Animal() {}
    void Print(const string &msg)
    {
        cout << msg << "\n";
    }

public:
    virtual void Voice(){};
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        Print("Woof");
    }
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        Print("Meow");
    }
};

class Duck : public Animal
{
public:
    void Voice() override
    {
        Print("Quack");
    }
};

int main()
{
    Animal *array[3] = {
        new Dog,
        new Cat,
        new Duck};
    for (Animal *animal : array)
    {
        animal->Voice();
    }
}
