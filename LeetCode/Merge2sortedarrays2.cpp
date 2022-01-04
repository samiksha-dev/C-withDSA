
#include <iostream>
using namespace std;
// merging 2 sorted arrays in 1st array
void merge(int arr1[], int m, int arr2[], int n, int arr3[], int o)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) // n is is sze of
    {
        // cout << arr1[i] << " " << arr2[j] << "\n";
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i]; // or for all three lines just do arr3[k++]==arr1[i++]
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // neeche ke 2 cases tab use honge jb koi ek array dusre se choti ho
    while (i < n) // iss case me pehli array badi hai
    {
        cout << arr1[i] << "\n";
        arr3[k] = arr1[i]; // or for all three lines just do arr3[k++]==arr1[i++]
        i++;
        k++;
    }
    while (j < m) // iss case me dusri array badi hai
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    for (int i = 0; i < n + m; i++)
    {
        arr1[i] = arr3[i];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr1[i];
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 6, 7};
    int arr2[3] = {2, 4, 8};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3, 8);
    return 0;
}