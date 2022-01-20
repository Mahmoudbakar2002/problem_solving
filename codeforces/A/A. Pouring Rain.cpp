/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define M_PI   3.141592653589793116

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
    double d=SCNInt(),
           h=SCNInt(),
           v=SCNInt(),
           e=SCNInt();

   double s=h*(d*d/4)*M_PI;
   double vr=v-(e*(d*d/4)*M_PI);
   if(vr<=0){printf("NO");return 0;}
   s=s/vr;
   if(s>=10000||s<=0){printf("NO");return 0;}
    printf("YES\n%0.12f",s);

}

/*
input: 



output :

*/