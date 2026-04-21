#include <iostream>
using namespace std;

int element[10];
int length;
int x;

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array (max 10): ";
        cin >> length;
        if (length <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[] Number of elements cannot exceed 10. Please try again.\n";
        }
    }

    cout << "\n==========================================\n";
    cout << " Enter Array Elements \n";
    cout << "==========================================\n";
 