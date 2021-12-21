#include <math.h>

double squareSumm(int a, int b)
{
    return pow(a + b, 2);
}

void printNumbers(int n, bool isEven)
{
    for (int i = 0; i < n; i++)
    {
        if ((isEven && i % 2 == 0) || (!isEven && i % 2 == 1))
        {
            std::cout << i << "\n";
        }
    }
}
