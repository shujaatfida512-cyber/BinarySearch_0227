#include <iostream>
using namespace std;

//global variables
int element[10];
int length;
int x;

// function prototypes
void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array (max 10): ";
        cin >> length;
        if (length <= 10 && length > 1)
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
// Function to sort the array using bubble sort 
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
// Function to display the sorted array 
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
// Function to perform binary search on the sorted array
void binarySearch()
{
    char repeat;
    do
    {
        int low = 0;
        int high = length - 1;
        int mid;
        bool found = false;

        cout << "\n";
        cout << " Binary Search \n";
        cout << "==========================================\n";
        cout << "Enter the element to search: ";
        cin >> x;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (x == element[mid])
            {
                cout << "\n[] Element " << x << " found at index " << mid << ".\n";
                found = true;
                break;
            }
            else if (x < element[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (!found)
        {
            cout << "\n[] Element " << x << " not found in the array.\n";
        }

        cout << "\nSearch again? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');
}
// Main function to execute the program
int main()
{
    input();
    bubbleSortArray();
    display();
    binarySearch();
    return 0;
}
// End of program