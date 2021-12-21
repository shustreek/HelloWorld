#include <iostream>
#include "Helpers.h"
#include <string>

using namespace std;

int main()
{
    /*    int a = 1, b = 3;
    std::cout << "Square of sum a and b: " << squareSumm(a, b) << "\n";

    std::string str;
    
    std::cout << "Please, enter something: ";
    std::getline(std::cin, str);

    std::cout << str << " with length: " << str.length() << "; first: " << str.front() << " and last: " << str.back() << "\n";
    printNumbers(10, false);
*/
    const int N = 5;
    int array[N][N];

    time_t now = time(0);
    int day = localtime(&now)->tm_mday;
    int row = day % N;

    // initialization
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int summ = i + j;
            array[i][j] = summ;
            cout << summ << " ";
        }
        cout << "\n";
    }

    // summ of row
    int summ = 0;
    for (int i = 0; i < N; i++)
    {
        summ += array[row][i];
    }
    cout << "Summ of " << row << " row: " << summ << "\n";
}
