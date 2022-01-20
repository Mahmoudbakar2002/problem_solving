/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define loop(i,a,b) for(int i=a;i<b;i++)
#define revloop(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define push(i) push_back(i)
#define mkpair(i) make_pair(i)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;

int main(){
    string x;cin>>x;
    string a="",b="";
    int low=0,upp=0;
    for (int i = 0; i < x.size(); i++)
    {   if(x[i]>='a'&&x[i]<='z')low++;
        else upp++; 
        a+=tolower(x[i]);
        b+=toupper(x[i]);    
    }
    if(upp>low){cout<<b;}
    else cout<<a;
  
   
}

/*
input: 



output :

*/