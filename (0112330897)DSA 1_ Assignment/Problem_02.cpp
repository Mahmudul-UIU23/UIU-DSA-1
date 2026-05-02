#include <bits/stdc++.h>

using namespace std;

int calculate_sum(vector<int> a,int s,int e){
    if(s==e){
        return a[s];
    }
    int mid=s+(e-s)/2;
    return calculate_sum(a,s,mid)+calculate_sum(a,mid+1,e);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=calculate_sum(arr,0,arr.size()-1);
    cout<<"Sum: "<<s;
    return 0;
}