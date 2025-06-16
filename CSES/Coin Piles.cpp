#include<iostream>
#include<vector>
#include<map>

using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        if(l==r && l==0)    cout<<"YES\n";
        else if(l==0 || r==0) cout<<"NO\n";
        else if(l>2*r || r>2*l) cout<<"NO\n";
        else{
            int tmp1=2*l - r;
            int tmp2=2*r - l;
            if(tmp1%3==0 || tmp2%3==0)
                cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
