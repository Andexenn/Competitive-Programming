#include<iostream>
#include<vector>
#include<map>
using namespace std;
int cost_hour[100];
int main(){
    for(int i=6;i<=12;i++)  cost_hour[i]=6;
    for(int i=13;i<=22;i++) cost_hour[i]=10;
    int start_time,end_time;
    cin>>start_time>>end_time;
    int check=1,bill=0;
    for(int i=start_time+1;i<=end_time;i++){
        if(check>4)    bill+=cost_hour[i]*0.5;
        else bill+=cost_hour[i];
        ++check;
    }
    cout<<bill;
    return 0;
}
