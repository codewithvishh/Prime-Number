#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    if(n%i==0) c++;
    }
    printf(c==2?"prime number":"not prime number");
    return 0;
}