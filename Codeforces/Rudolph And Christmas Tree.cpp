#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define int long long
using namespace std;

signed main(){
    int t;cin>>t;
    while(t--){
        int n,d,h;cin>>n>>d>>h;
        vector<int>bases(0,n);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            bases.push_back(x);
        }


        sort(bases.begin(),bases.end());

        double area=0;
        for(int i=0;i<bases.size();i++){
            if(bases[i+1]>=bases[i]+h){
                area+=0.5*d*h;
            }
            else{
                int distance=bases[i+1]-bases[i];
                cout<<d+d-2*distance<<endl;
                area+=0.5*distance*(d+d-2*distance);
            }
        }

        //cout<<fixed<<setprecision(6)<<area<<"\n";
    }
    return 0;
}
