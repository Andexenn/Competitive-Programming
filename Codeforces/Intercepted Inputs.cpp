#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int t;

int main(){
    cin>>t;
    while(t--){
        int k;cin>>k;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<k;i++){
            int x;cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        int tmp=k-2;
        //cout<<mp[2]<<endl;
        for(int i=0;i<k;i++){
            if(tmp%v[i]==0){
                if(tmp/v[i]==v[i]&&mp[v[i]]-1!=0) { cout<<v[i]<<' '<<tmp/v[i]<<'\n';break;}
                if(mp[tmp/v[i]]!=0&&tmp/v[i]!=v[i]) { cout<<v[i]<<' '<<tmp/v[i]<<'\n';break;}
            }
        }


    }
    return 0;
}
