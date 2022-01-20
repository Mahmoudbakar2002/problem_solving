#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int n;
   scanf("%d",&n);
   for (int i = 1; i <=n; i++)
   {
       for (int j = 1; j <=n; j++)
       {  
           if((n+1)/2==i&&i==j)printf("X");
           else if(i==j)printf("\\");
           else if((n+1-j)==i)printf("/");
           else printf("*");
       }
       printf("\n");
       
   }
   
 
    
}