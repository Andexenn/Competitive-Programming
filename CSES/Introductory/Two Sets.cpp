#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    int n;cin>>n;
    int sum=n*(n+1)/2;
    if(sum%2) cout<<"NO\n";
    else{
        cout<<"YES\n";
        vector<int>s1,s2,vis(n+1,0);
 
        int s1_sum=0,mx=n;
        while(s1_sum<sum/2){
 
            int remain = sum/2 - s1_sum;
 
            if(remain>mx){
                s1.push_back(mx);
                vis[mx]=1;
                s1_sum+=mx;
                mx--;
            }
            else{
                s1.push_back(remain);
                vis[remain]=1;
                s1_sum=sum/2;
            }
 
        }
 
        for(int i=1;i<=n;i++){
            if(!vis[i])
                s2.push_back(i);
        }
 
        cout<<s1.size()<<endl;
        for(int x:s1)
            cout<<x<<' ';
        cout<<endl;
        cout<<s2.size()<<endl;
        for(int x:s2)
            cout<<x<<' ';
    }
}