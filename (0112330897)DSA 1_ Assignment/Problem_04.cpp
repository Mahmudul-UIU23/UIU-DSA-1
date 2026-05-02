#include <bits/stdc++.h>

using namespace std;

int power(int x,int y){
    if(y==1){
        return x;
    }
    
    return power(x,y/2)*power(x,y-y/2);
}

int main(){
    int x,y;
    cout<<"X: ";
    cin>>x;
    cout<<"Y: ";
    cin>>y;

    int ans=power(x,y);
    cout<<"X^Y: "<<ans;
    return 0;
}