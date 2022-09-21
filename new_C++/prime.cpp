#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int x,n;
    cin>>n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            x=1;
            break;
        }
        
    }
    
    if (x==1)
    {
        cout<< "non prime";
    }
    else
    {
        cout <<"prime";
    }
  
    return 0;
}