#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    string x;cin>>x;
    int ganh=(x.length()-1)/2;
    string res1="",res2="";
    int so_ganh=-1;
    int n=x.length();
    for(int i = 1 ; i <= ganh ; i++){
        for(int j = 0 ; j < i ; j++){
            res1+=x[j];
        }
        for(int j= n - i ; j < n ;j++){
            res2+=x[j];
        }
        if(res1==res2){  
            so_ganh=i;
            res1=res2="";
        }
        res1=res2="";
    }
    cout<<so_ganh;
    return 0;
}
