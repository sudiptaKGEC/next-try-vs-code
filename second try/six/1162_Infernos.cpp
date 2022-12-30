#include <bits/stdc++.h>
using namespace std;



int main() {
	 int n, x;
    cin>>n>>x;
    
    int i, h[n], second =0;
    
    for(i=0; i<n; i++){
        cin>>h[i];
    }
    int p = sizeof(h)/ sizeof(h[0]);
    sort(h, h+p);
    
    if(n>= h[n-1]) cout<<h[n-1]<<endl;
    else {
        for(i=0; i<n; i++){
            if(h[i]%x==0) second = second+(h[i]/x);
            else second = second+(h[i]/x) +1;
        }
        cout<<second<<endl;
        
    }
	return 0;
}