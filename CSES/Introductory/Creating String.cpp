#include<bits/stdc++.h>
using namespace std;
set<string>res;
char store[100];
bool vis[100];
void gen_per(string x,int i){
    for(int j = 0; j < x.length() ; j++){
        if(!vis[j]){
            vis[j]=true;
            store[i]=x[j];
            if(i==x.length()-1){
                string a="";
                for(int k=0;k<x.length();k++)
                    a+=store[k];
                res.insert(a);
            }
            else gen_per(x,i+1);
            vis[j]=false;
        }
    }
}
 
int main(){
    string s;cin>>s;
    gen_per(s,0);
    cout<<res.size()<<endl;
    for(auto x: res)
        cout<<x<<endl;
    return 0;
}