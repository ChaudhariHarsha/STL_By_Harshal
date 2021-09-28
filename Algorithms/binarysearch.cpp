#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int k;cin>>k;
    (binary_search(a,a+n,k)==1)? cout<<"Present"<<endl: cout<<"Absent"<<endl;
    
    
    auto lb= lower_bound(a,a+n,k);
    cout<<lb-a<<endl;
    
    auto ub= upper_bound(a,a+n,k);
    cout<<ub-a<<endl;
    
    cout<<"freq of key"<<ub-lb;
    }
