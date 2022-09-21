#include<iostream>
#include<math.h>
using namespace std;

int octalToDecimal(int num){
    int ans = 0, j = 0;
    for (int i = num; i != 0; i/=10)
    {
        ans += (i%10)*pow(8, j);
        
        j++;
    }
    return ans;
}

// int octalToDecimal(int num){
//     int ans = 0, x = 1;
//     while (num!=0)
//     {
//         int y = num%10;
//         ans += y*x;
//         x*=8;
//         num/=10;
//     }
    
//     return ans;
// }

int main(){
    
    int n;
    cin>>n;
    
    cout<<octalToDecimal(n)<<endl;

    return 0;
}