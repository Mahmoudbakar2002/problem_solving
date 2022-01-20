#include <bits/stdc++.h>
 
 
using namespace std;
 
 typedef long long ll;

int main() {
 
    int n,m;
    scanf("%d %d",&n,&m);
    n=(n>m)?m:n;
    
    int counter=0;
    int a=n;
    
    for (; a>=0; a--)
    {
        int b=(m-a>n)?n:m-a;
        int c=m-(a+b);
        for (;b>=0&&c<=n;b--,c++)
        {
            counter++;
        }
        
    }
    printf("%d",counter);

}