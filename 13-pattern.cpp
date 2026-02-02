#include <bits/stdc++.h>
using namespace std;
void print13(int n){
    int num =1;
    for(int i =1; i<=n;i++){
        //number
        for(int j = 1; j <= i; j++){
            cout<<num;
            num = num+1;
        }
        // for(int j = 1; j<=2 * (n-i);j++){
        //     cout<<" ";
        // }
        // //number
        // for (int j = i;j>=1; j-- ){
        //     cout<<j;
        // }
        cout<<endl;
    }
}
int main(){
    int n = 4;
    // cin>>n;
    print13(n);
    
    
    return 0;
}