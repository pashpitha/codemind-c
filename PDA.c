#include<stdio.h>
#include<math.h>
int main(){
    int n,i,m;
    float s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s+=i;
    }
    if(s==n)
    printf("PERFECT");
    else if(s<n)
    printf("DEFICIENT");
    else
    printf("ABUNDANT");
}