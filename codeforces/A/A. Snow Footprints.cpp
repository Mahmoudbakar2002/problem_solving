    /*
    Problem Name: 
    Problem Link: 
    Author: Mahmoud Atef (Bakar)
    solved Date : /11/2021
    */

    #include <bits/stdc++.h>
    using namespace std;

    #define endl '\n'

    #define REP(i,a,b) for(int i=a;i<b;i++)
    #define INREV(i,a,b) for(int i=a;i>b;i--)
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
        char path[n];
        REP(i,0,n)
            cin>>path[i];
        int r0=-1,r1=-1,l0=-1,l1=-1;
        int i=-1;
        do{
            if(path[++i]=='R')r0=i;
        }while (path[i]=='.');
        while(r0>=0&&i<n&&r1==-1){
            if(path[++i]!='R')r1=i-1;
        }

        int j=n-1;
        while (j>=i){
            if(path[j]=='L')l1=j;
            if(path[j--]!='.')break;
        } 
        while(l1!=-1&&j>=0&&l0==-1){
            if(path[j--]!='L')l0=j+2;
        }

        if(l0==-1)printf("%d %d",r0+1,r1+2);
        else if(r0==-1)printf("%d %d",l1+1,l0);
        else printf("%d %d",r0+1,r1+1);
        // else 
        // cout<<r0<<" "<<r1<<" "<<l0<<" "<<l1<<" ";

    }

    /*
    input: 



    output :

    */