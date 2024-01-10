#include <iostream>

using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)

        {
            return mid;
        }
        if (key > arr[mid])

        {
            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int key, size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter Number to search: ";
    cin >> key;
    int index = binarysearch(arr, size, key);
    if (index == -1)
    {
        cout << key << " not found in the array:" << endl;
    }
    else
    {
        cout << key << " is at: " << ++index << " position" << endl;
    }
    cout << " Array is -> ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}
