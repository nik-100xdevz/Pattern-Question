// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void pattern6(int n){
    for(int i = n;i>=1;i--){
        for(int j = 1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    pattern6(n);
    return 0;
}