#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
    int T;
    scanf("%d",&T);
    while(T--){
        int n,m;
        scanf("%d %d",&n,&m);
        if(n>m)swap(n,m);
        n=(n%2==0)?n+1:n+2;
        int sum=0;
        for(;n<m;n+=2)
            sum+=n;
        printf("%d\n",sum);    
    }
}