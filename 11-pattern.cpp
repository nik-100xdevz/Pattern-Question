#include <bits/stdc++.h>
using namespace std;
void printbool(int n){
      for(int i = 1;i<=n;i++){
       bool val = (i % 2 == 1 ) ;
        
        for(int j=1;j<=i;j++){
             cout<<val;
             val =!val;
        }
        cout<<endl;
    }
}

int main(){
        int n;
        cin >>n;
        printbool(n);
        // cout<<true<<false<<endl;
    return 0;
}