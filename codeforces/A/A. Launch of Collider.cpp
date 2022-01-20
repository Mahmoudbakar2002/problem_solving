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
    int n=SCNInt();
    char dirs[n];
    int cords[n];
    for (int j = 0; j < n; j++)
        cin>>dirs[j];
    for (int j = 0; j < n; j++)
        cords[j]=SCNInt();

    int i=0;
    while (i<n&&(dirs[i]!='R'||dirs[i+1]!='L'))
        i++;
    if(i==n){printf("-1");return 0;}    
    int mp=cords[n-1];

    while(i<(n-1)){
        if(dirs[i]!='R'||dirs[i+1]!='L'){i++;continue;}
        mp=min((cords[i+1]-cords[i])/2,mp);
        i+=2;
    }
    printf("%d",mp);
    

}

/*
input: 



output :

*/