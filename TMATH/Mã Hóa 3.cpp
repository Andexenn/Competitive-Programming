#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;cin>>s;
    int len=s.length();
    string ans;
    for(int i=0;i<len;i++){
        string tmp;
        if(s[i]=='9'){
            tmp.push_back(s[i]);
            tmp.push_back(s[i+1]);
            char c=(char)stoi(tmp);
            ans.push_back(c);
            i++;
        }
        else{
            tmp.push_back(s[i]);
            tmp.push_back(s[i+1]);
            tmp.push_back(s[i+2]);
            char c=(char)stoi(tmp);
            ans.push_back(c);
            i+=2;
        }
    }
    cout<<ans;
    return 0;
}
