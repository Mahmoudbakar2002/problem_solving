#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int x;
   scanf("%d",&x);
   int a=x/10,b=x%10;

   if(b%a==0||a%b==0)printf("YES");
   else printf("NO");
   

}