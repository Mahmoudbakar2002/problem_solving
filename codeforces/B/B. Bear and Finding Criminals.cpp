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
#define push(i) push_back(i)
#define mkpair(i,j) make_pair(i,j)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);


int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int n=SCNInt();
    int j=(SCNInt())-1;
  
    int cities[n];
    REP(i,0,n)
        cities[i]=SCNInt();
    
    int i=0;
    int number=cities[j];
    while ((j+(++i))<n&&(j-i)>=0)
        if(cities[j+i]&&cities[j-i])number+=2;
        
        
    int k=--i;
    while(j+(++k)<n)
        if(cities[j+k])number++;
    while((j-(++i))>=0)
        if(cities[j-i])number++;

    printf("%d",number);
   
}

/*
input: 



output :

*/