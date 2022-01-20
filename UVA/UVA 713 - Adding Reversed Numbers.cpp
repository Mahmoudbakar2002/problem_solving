/*
Problem Name: 
PrACoblem Link: 
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
    int t;cin>>t;
    while (t--){
        string a,b,res;cin>>a>>b;
        if(a.size()<b.size())swap(a,b);
        int s1=a.size(),s2=b.size();
        int i=0,rem=0;
        bool st=true;
        for (; i < s1; i++){
            int n1=a[i]-'0',n2=(i>=s2)?0:(b[i]-'0');
            int x=n1+n2+rem;
            rem=0;
            if(x>9){
                rem=x/10;
                x%=10;
            }
            if(st&&x==0)continue;
            putchar((x+'0'));
            st=false;
        }
        if(rem>0)
            putchar((rem+'0'));
        putchar('\n');
        
        
    
    }
    
   
}

/*
input: 



output :

*/