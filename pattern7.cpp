#include <iostream>
using namespace std;

int main()
{
    // Print this pattern
    /*

    ****
    ***  
    **  
    *
     */
    int num;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        int space = 1;
        while (space <= num-row)
        {
            cout << " ";
            space++;
        }
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}