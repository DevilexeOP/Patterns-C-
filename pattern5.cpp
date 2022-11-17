#include <iostream>
using namespace std;

int main()
{
    /*
    print this pattern using forLoop
    num =3
    output = 333
             22
             1
     */

    int num, row, col;
    cin >> num;
    for (row = num; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << row;
        }
        cout << endl;
    }

    return 0;
}