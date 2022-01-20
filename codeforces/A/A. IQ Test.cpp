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
    char paint[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin>>paint[i][j];

    int x=0,y=0;
    while(y<3){
        char c=paint[y][x];
        int num= (paint[y+1][x]!=c)?1:0;
            num+=(paint[y][x+1]!=c)?1:0;
            num+=(paint[y+1][x+1]!=c)?1:0;
        if(num!=2){
            printf("YES");return 0;
        }
        x++;
        if(x>=3){x=0;y++;}    
    }    
    printf("NO");
   
}

/*
input: 



output :

*/