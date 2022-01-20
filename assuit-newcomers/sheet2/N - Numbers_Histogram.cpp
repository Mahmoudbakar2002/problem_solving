#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
   char c;
   int n;
   scanf("%c %d",&c,&n);
   int nums[n];
   for(int i=0;i<n;i++)
    scanf("%d",&nums[i]);
   for(int i=0;i<n;i++){
     for(int j=0;j<nums[i];j++)
        printf("%c",c);
     printf("\n");
        }
}