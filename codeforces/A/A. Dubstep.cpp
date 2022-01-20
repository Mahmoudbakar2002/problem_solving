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
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
  string txt;cin>>txt;
    int i=0,j=txt.size()-1;
    while (i+2<txt.size()&&txt[i]=='W'&&txt[i+1]=='U'&&txt[i+2]=='B')
        i+=3;
    while (j-2>0&&txt[j-2]=='W'&&txt[j-1]=='U'&&txt[j]=='B')
        j-=3;    
    
    string res="";
    
    while(i<=j){
        if(i+2<=j&&txt[i]=='W'&&txt[i+1]=='U'&&txt[i+2]=='B'){
            while(i+2<=j&&txt[i]=='W'&&txt[i+1]=='U'&&txt[i+2]=='B')i+=3;
            res+=" ";
            }
        res+=txt[i++];    
    }
    cout<<res<<endl;
       
}

/*
input: 



output :

*/