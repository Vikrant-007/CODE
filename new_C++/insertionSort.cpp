#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int current = arr[i+1];
        int j = i;
        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    insertionSort(arr, n);

    return 0;
}