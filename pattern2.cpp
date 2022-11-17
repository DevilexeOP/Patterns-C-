#include <iostream>
using namespace std;

int main()
{
    /*
    Print the following pattern
    n= 1
    output= 1
    n=2
    output= 2
    22
     */

    int num, row = 1;
    cin >> num;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << num;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}