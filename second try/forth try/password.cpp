#include<bits/stdc++.h>
using namespace std;

int fact(int number){

    if(number>0){
        int factorial = 1;
    for(int i=1; i<=number; i++){
        factorial = factorial * i;
    }
    return factorial;
    }
    else return 1;

    
}

int result(int n){

    int ans = fact(n)/(fact(2) * fact(n-2));

    cout<< 6*ans<<endl;

}

int main(){

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    int i, a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    result(10-n);
    

  }

    return 0;
}