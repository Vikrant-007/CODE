#include<iostream>
#include<climits>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n;

    while (s <= e)
    {
        int mid = (s+e)/2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        
    }
    
    return -1;

}

int main()
{
    int n;
    cout<<"num: ";
    cin>>n;
    int arr[n];
    cout<<"Arr: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Key: ";
    cin>>key;
    if (binarySearch(arr, n, key) == -1)
    {
        cout<<"Not Found!!!";
    }
    else
    {
        cout<<"Found at: "<<binarySearch(arr, n, key);
    }
    return 0;
} 