#include <bits/stdc++.h>
using namespace std;

void odd(vector<int> a,int s,int e){
    if(s==e){
        if(a[s]%2==1) cout<<a[s]<<" ";
        return ;
    }
    int mid=s+(e-s)/2;
    odd(a,s,mid);
    odd(a,mid+1,e);
}



int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    odd(arr,0,arr.size());
    
    return 0;
}