#include <bits/stdc++.h>

using namespace std;

struct maxAndMin{
    float max,min;
};

maxAndMin findMaxMin(vector<float> arr,int s,int e){
    maxAndMin left,result,right;
    if(s==e){
        result.max=result.min=arr[s];
        return result;
    }
    int mid=s+(e-s)/2;
    left=findMaxMin(arr,s,mid);
    right=findMaxMin(arr,mid+1,e);
    result.max=max(left.max,right.max);
    result.min=min(left.min,right.min);
    return result;

}


int main(){
    int n;
    cin>>n;
    vector<float> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    maxAndMin r=findMaxMin(arr,0,arr.size()-1);
    cout<<"Max : "<<r.max<<" "<<"Min: "<<r.min;
    
    return 0;
}