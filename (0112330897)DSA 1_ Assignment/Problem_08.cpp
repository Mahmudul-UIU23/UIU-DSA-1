#include <bits/stdc++.h>

using namespace std;

int count(vector<int> arr,int s,int mid,int e){
    int i=s,j=mid+1,c=0;
    while(i<=mid){
        if(j>e){
            j=mid+1; i++;
        }
        if(arr[i]>arr[j]){
            c++; 
        }
        j++;
    }
    return c;
}


int count_inversions(vector<int> arr,int s,int e){
    if(s<e){
        int mid=s+(e-s)/2;
        int left=count_inversions(arr,s,mid);
        int right=count_inversions(arr,mid+1,e);
        return left+right+count(arr,s,mid,e);
    }
    else return 0;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=count_inversions(arr,0,arr.size()-1);
    cout<<"inversions: "<<c;
    return 0;
}