#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int k;cin>>k;
    auto it =find(a,a+n,k);
    int ind=it-a;
    cout<<ind;
    }
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int k;cin>>k;
    cout<<find(a,a+n,k)-a;
    }
*/
