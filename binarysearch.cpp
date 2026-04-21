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
   for (int i = 0; i < length; i++)
    {
        cout << "Data-" << (i + 1) << " = ";
        cin >> element[i];
    }
}
void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j < length - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= length - 1);
}
void display()
{
    cout << "\n==========================================\n";
    cout << " Sorted Array Elements (Ascending) \n";
    cout << "==========================================\n";
    for (int j = 0; j < length; j++)
    {
        cout << element[j] << " ";
    }
    cout << endl;
}

void binarySearch()