#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int minNo = arr[0];
    // int maxNo = arr[0];
    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if (minNo > arr[i])
        // {
        //     minNo = arr[i];
        // }

        // if (maxNo < arr[i])
        // {
        //     maxNo = arr[i];
        // }

        minNo = min(minNo, arr[i]);
        maxNo = max(maxNo, arr[i]);
    }
    cout<<"minNo: "<<minNo<<endl;
    cout<<"maxNo: "<<maxNo<<endl;


    return 0;
}