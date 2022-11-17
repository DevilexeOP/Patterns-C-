#include <iostream>
using namespace std;

int main()
{
    /* Print this Pattern using for loop
    n = 2
    output = **
             **
    */

    int num, row, col;
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}