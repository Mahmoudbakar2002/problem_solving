#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
   int n;
   scanf("%d",&n);
   int x=1;
   for(int i=1;i<=n;i++){
       while(x<4*i)printf("%d ",x++);
        x++;
        printf("PUM\n");
    }
}