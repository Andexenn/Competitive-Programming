#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        int flag=0;
        for(int i=1;i<n;i++)
            if(vec[i]<vec[i-1])
                flag=i;
        if(!flag){
            cout<<"YES\n";
            continue;
        }
        for(int i=0;i<flag;i++){
            int mn=min(vec[i],vec[i+1]);
            vec[i]-=mn;
            vec[i+1]-=mn;
        }
        vector<int>Sorted=vec;
        sort(Sorted.begin(),Sorted.end());

        bool ans=Sorted == vec ? true :  false;
        if(ans)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
