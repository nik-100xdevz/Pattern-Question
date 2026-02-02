#include <bits/stdc++.h>
using namespace std;

void pattern16(int n){
    for(int i = 0; i<=n; i++){
        char ch = 'A' + i;
        for(char c = 'A'; c<= 'A'+(i); c++){
            cout<<ch;
        }
        cout<<endl;
    }
}


int main(){
    int n = 4;
    pattern16(n);
    
    return 0;
}
