#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int mod = n%10;
    n=n/10;
    if(mod%n==0 || n % mod ==0){
    printf("YES");
     }
     else{
        printf("NO");
     }
     return 0;
}