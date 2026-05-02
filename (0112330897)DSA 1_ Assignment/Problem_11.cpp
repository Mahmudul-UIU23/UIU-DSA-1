#include <bits/stdc++.h>
using namespace std;
string prefix(string s1,string s2){
    int l1=s1.length(),l2=s2.length();
    int prefix=0;
    for(int i=0;i<min(l1,l2);i++){
        if(s1[i]==s2[i]){
            prefix++;
        }else break;
    }
    return s1.substr(0,prefix);
}

string LongCommonPrefix(vector<string> &s,int l,int r){
    if(l==r){
        return s[l];
    }

    int mid=l+(r-l)/2;
    string left=LongCommonPrefix(s,l,mid);
    string right=LongCommonPrefix(s,mid+1,r);
    string common_prefix=prefix(left,right);

    if(common_prefix.length()==0) return " No common prefix! ";
    else return common_prefix;
}

int main(){
    int n;
    cout<<"Array size: ";
    cin>>n;
    vector<string> s(n);
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    string prefix=LongCommonPrefix(s,0,s.size()-1);
    cout<<prefix;

    return 0;
}