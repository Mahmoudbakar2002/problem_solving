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

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
  
   int t=SCNInt();
   while(t--){
       string x;cin>>x;bool v=false;
       for (int i = x.size()-1; i >0 ; i--){
           int a=(x[i]-'0');
           int b=(x[i-1]-'0');
            int c=a+b;
            if(c>9){
               // cout<<c;
                x[i-1]=((c/10)+'0');
                x[i]=c%10+'0';
                v=true;
                break;
            }
       }
       
       if(v)
        cout<<x<<endl;
       else {
           int s=x.size();
           int h=x[0]+(x[1]-'0');
            putchar((h));   
            for (int i = 2; i < s; i++)
            putchar(x[i]);
           
           putchar('\n');
       }
   }
}

/*
input: 



output :

*/