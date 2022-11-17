#include <iostream>
using namespace std;

int main()
{

    // Print this pattern
    /*

     *
     **
     ***

     */

    int num, row = 1;
    cin >> num;
    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}