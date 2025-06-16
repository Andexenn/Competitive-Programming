#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll left=max(a,c);
    ll right=min(b,d);
    if(right-left<0)    cout<<"0";
    else cout<<right-left+1;
    return 0;
}
