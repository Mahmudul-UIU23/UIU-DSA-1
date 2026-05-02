#include <bits/stdc++.h>

using namespace std;

int calculate_sum(vector<int> a,int l,int r){
    if(l==r){
        if(a[l]%2==0) return a[l];
        return 0;
    }

    int mid=l+(r-l)/2;
    return calculate_sum(a,l,mid)+calculate_sum(a,mid+1,r);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=calculate_sum(arr,0,arr.size()-1);
    cout<<"Sum: "<<s<<endl;
    return 0;
}