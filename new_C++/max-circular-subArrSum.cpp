#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[], int n)
{
    int sum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum<0)
        {
            sum = 0;
        }
        maxSum = max(sum, maxSum);         
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int wrapSum;
    int nonWrapSum = kadane(a,n);
    int sumOfArr = 0;

    for (int i = 0; i < n; i++)
    {
        sumOfArr += a[i];
        a[i] = -a[i];
    }
    
    wrapSum = sumOfArr + kadane(a,n);
    cout<<max(wrapSum, nonWrapSum)<<endl;   
      

    return 0;
}