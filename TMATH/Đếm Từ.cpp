#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string s;
    string arr[10000];
    getline(cin,s);
    cin.ignore();
    int k=0;
    stringstream ss(s);
    string token;
    while(ss>>token){
        arr[k]=token;
        k++;
    }
    
    cout<<k<<endl;
    for(int i=0;i<k;i++)
        cout<<arr[i]<<endl;
    return 0;
}
