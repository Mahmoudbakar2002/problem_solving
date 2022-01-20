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
#define mkpair(i,j) make_pair(i,j)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;

int power(int a,int b){
    if(b<=0)return 1;
    int x=power(a,b/2);
    int res=x*x;
    if(b&1)res*=a;
    return res;
}
int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);  
   
      
    ll x=SCNLL();
    int cnt=0;
    /*
            My first solution
                by calclute log to find eaution like that:
                    x= 2^a + 2^b+ 2^c ..... +2^n 
    **/
        // int a;
        // do{
        //     a=log2(x);
        //     cnt++;
        //     x-=power(2,a);
        // }while(a>0&&x>0);
    /*
        then find that from standing 
            2^a is a bit (a-1) in binary
            so use (__builtin_popcount(x))
            to count how many 1-bits in x
            x= (0/1)*(2^a) 
    */
    cnt=__builtin_popcount(x);
    printf("%d",cnt);
}

/*
input: 



output :

*/