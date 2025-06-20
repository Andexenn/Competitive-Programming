#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string x;cin>>x;
    int res=1,cur=1;
    for(int i=1;i<x.length();i++){
        if(x[i]==x[i-1]){
            cur++;
            res=max(res,cur);
        }
        else cur=1;
    }
    cout<<res;
    return 0;
}