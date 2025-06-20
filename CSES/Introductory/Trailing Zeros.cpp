#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,cnt2=0,cnt5=0;cin>>n;
    int nbackup=n;
 
    while(n>0){
        cnt2+=n/2;
        n/=2;
    }
    n=nbackup;
    while(n>0){
        cnt5+=n/5;
        n/=5;
    }
    cout<<min(cnt5,cnt2);
    return 0;
}