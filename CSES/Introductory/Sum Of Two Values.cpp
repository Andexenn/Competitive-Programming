#include<iostream>
#include<vector>
#include<map>

using namespace std;
map<int,int>mp;
 
int main(){
    int n,x;cin>>n>>x;
    vector<int>vct(n);
    for(int i=1;i<=n;i++)   cin>>vct[i];
    for(int i=1;i<=n;i++){
        if(mp.count(x-vct[i])){
            cout<<mp[x-vct[i]]<<" "<<i;
            return 0;
        }
        mp[vct[i]]=i;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
