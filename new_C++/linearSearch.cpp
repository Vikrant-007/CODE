#include<iostream>
#include<climits>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
    if (linearSearch(arr, n, key) == -1)
    {
        cout<<"Not Found!!!";
    }
    else
    {
        cout<<"Found at: "<<linearSearch(arr, n, key);
    }
    return 0;
}