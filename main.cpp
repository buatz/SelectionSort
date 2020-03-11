#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;


    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int a;
    cout<< "Enter the number of items to sort: ";
    cin>> a;
    int arr[a];

    for(int w=0;w<a;w++){
        cout<< "Enter the number: ";
        cin >> arr[w];
    }

    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: [";
    printArray(arr, n);
    cout << "]"<<endl;

    system("pause");
    return 0;
}
