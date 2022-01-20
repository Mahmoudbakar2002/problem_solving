#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
   int n;
   scanf("%d",&n);
   
   for(int i=1;i<=n;i++){
       int stars=(2*i)-1;
       for(int j=0;j<n-i;j++) 
        printf(" ");  
       for(int j=0;j<stars;j++)
        printf("*");
    printf("\n");
    }
     for(int i=n;i>=1;i--){
       int stars=(2*i)-1;
       for(int j=0;j<n-i;j++) 
        printf(" ");  
       for(int j=0;j<stars;j++)
        printf("*");
    printf("\n");
    }
}