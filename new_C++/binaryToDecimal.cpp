#include<iostream>
#include<math.h>
using namespace std;

// int binaryToDecimal(int num){
//     int ans = 0, j = 0;
//     for (int i = num; i != 0; i/=10)
//     {
//         ans += (i%10)*pow(2, j);
           
//         j++;
//     }
//     return ans;
// }
int binaryToDecimal(int num){
    int ans = 0, x = 1;
    while (num!=0)
    {
        int y = num%10;
        ans += y*x;
        x*=2;
        num/=10;
    }
    
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<binaryToDecimal(n)<<endl;

    return 0;
}