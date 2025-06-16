#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int i=4,cnt=2;
        if(n==1)    cout<<1<<endl;
        else if(n==2||n==3)cout<<2<<endl;
        else{
            while(i<n){
                i=i*2+2;
                cnt++;
            }
            cout<<cnt<<endl;
        }

    }
}
