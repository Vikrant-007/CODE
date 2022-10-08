#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int s)
{
    int low = 0;
    int high = n-1;

    while (low<high)
    {
        if (arr[low]+arr[high] == s)
        {
            cout<<low<<" "<<high<<" "<<endl;
            return true;
        }
        else if (arr[low]+arr[high] < s)
        {
            low++;
        }
        else if (arr[low]+arr[high] > s)
        {
            high--;
        }
        
    }
    
    return false;
}

int main()
{
    int a[] = {2,4,7,11,14,16,20,21};

    cout<<pairsum(a,8,31)<<endl;

    return 0;
}