#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v(n+5,0);
long long ans=0;
int main(){
    cin>>n;
    int cur=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(i==0){
            cur=x;
            continue;
        }
        else{
            if(x<cur){
                ans+=cur - x;
                x=cur;
            }
            cur=x;
        }
    }
    cout<<ans;
    return 0;
}