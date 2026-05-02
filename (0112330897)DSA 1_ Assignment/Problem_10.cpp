#include <bits/stdc++.h>

using namespace std;

struct subarray_sum{
    int low,high,sum;
};

subarray_sum Find_cr_sum_subarr(vector<int> &arr,int l,int mid,int r){
    int i=mid,j=mid+1,L_max,r_max,sum=0;
    L_max=r_max=INT_MIN;
    subarray_sum subarray;
    while(i>=l){
        sum+=arr[i];
        if(sum>L_max){
            L_max=sum;
            subarray.low=i;
        }
        i--;
    }

    sum=0;
    while(j<=r){
        sum+=arr[j];
        if(sum>r_max){
            r_max=sum;
            subarray.high=j;
        }
        j++;
    }
    subarray.sum=L_max+r_max;
    return subarray;
}

subarray_sum Find_max_sum_subarr(vector<int> &arr,int l,int r){
    subarray_sum L,ri,cr;
    if(l==r){
        ri.low=ri.high=l;
        ri.sum=arr[l];
        return ri;
    }
    int mid=l+(r-l)/2;
    L=Find_max_sum_subarr(arr,l,mid);
    ri=Find_max_sum_subarr(arr,mid+1,r);
    cr=Find_cr_sum_subarr(arr,l,mid,r);
    if(L.sum>=ri.sum && L.sum>=cr.sum) return L;
    else if(L.sum<=ri.sum && cr.sum<=ri.sum) return ri;
    else return cr;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subarray_sum r=Find_max_sum_subarr(arr,0,arr.size()-1);
    for(int i=r.low;i<=r.high;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<r.sum;
    return 0;
}
