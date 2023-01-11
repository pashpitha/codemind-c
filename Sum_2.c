#include<stdio.h>
int main(){
    int n,i,x,y,m,s=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(i=n;i<=m;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            s+=i;
        }
    }
    printf("%d",s);
}