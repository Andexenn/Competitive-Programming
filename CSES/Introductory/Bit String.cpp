#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD=1e9+7;
int n;
 
signed main(){
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=2;
        ans%=MOD;
    }
    cout<<ans;
}