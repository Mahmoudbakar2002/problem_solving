/*****************************************
 *      Don't Give up try and try and 
 *       you will achive your target
*****************************************/

/*
    readed in 7/7/2021 (first live contest)
    solved in 18/1/2022
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        if(a>b)swap(a,b);
        if(a==b){
            cout<<"0 0\n";
            continue;
        }
        ll x=b-a;
        // ll m=0;
        // while ((a-m)%x!=0&&(a+m)%x!=0)
        //     m++;
        
        
        ll level=b/x;
        ll m=min((b-(level*x)),(((level+1)*x)-b));
        cout<<x<<" "<<m<<"\n";
    }

}