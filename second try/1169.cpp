#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    cin>>n>>x;
    
    int i, a[n], sum=x;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(i=0; i<n; i++){
          sum += a[i];

          if(sum>x){
            x =sum;
          } 
    }

    cout<<x<<endl;
    
    

    return 0;
}