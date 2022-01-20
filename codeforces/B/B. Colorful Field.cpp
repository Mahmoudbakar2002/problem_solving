/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /12/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define REP(i,a,b) for(int i=a;(a<b&&i<b)||(a>b&&i>b);i+=(a<b)?1:-1)
// #define IREP(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define PB(i) push_back(i)
#define mkpair(i,j) make_pair(i,j)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;
bool sortpair(pair<int ,int> st,pair<int ,int> nd){
    if(st.first!=nd.first)return st.first<nd.first;
    return st.second<nd.second;
}
int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    vector<pair<int,int>> died;
    string crops[]={"Carrots","Kiwis","Grapes"};
    int n=SCNInt(),m=SCNInt(),k=SCNInt(),t=SCNInt();
    while (k--){
        int x=SCNInt()-1,y=SCNInt()-1;
        died.push_back({x,y});
    }
    sort(all(died),sortpair);
        // for (pair<int ,int > cell:died){
        //     printf("(%d,%d)\n",cell.first,cell.second);
        // }
    while (t--)
    {   
        int x=SCNInt()-1,y=SCNInt()-1;
        int index=(x*m)+y;

        for (pair<int ,int > cell:died){
            if(cell.first==x&&cell.second==y){
                index=-1;break;
            }else if(sortpair(cell,{x,y}))index--;
            else break;
        }
        if(index==-1)cout<<"Waste\n";
        else cout<<crops[index%3]<<endl;

    }
    
   
}

/*
input: 



output :

*/