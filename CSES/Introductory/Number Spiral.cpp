#include<iostream>

using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
            int x,y,u,v;cin>>x>>y;
            long long k=(long long)max(x,y)*max(x,y);
            if(max(x,y)%2==0){
                u=max(x,y);
                v=1;
            }
            else{
                u=1;
                v=max(x,y);
            }
            cout<<k - (abs(u-x) + abs(v-y))<<endl;
 
    }
    return 0;
 
}
