#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int a,b;
   scanf("%d %d",&a,&b);
   if((a==b||abs(a-b)==1)&&(a!=0&&b!=0))
    printf("YES");
   else
    printf("NO"); 
    
}