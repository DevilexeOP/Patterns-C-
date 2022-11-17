#include <iostream>
using namespace std;

int main()
{
    /*
    Print this pattern using forLoop
    n=4
    output= ****
            ***
            **
            *
     */

    int num, row, col;
    cin >> num;
    for (row = num; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}