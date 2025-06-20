#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1)    cout<<0<<endl;
        else if(i==2)   cout<<6<<endl;
        else {
            cout<< (long long)i*i*(i*i-1)/2 - 4*(i-1)*(i-2)<<endl;
        }
    }
}