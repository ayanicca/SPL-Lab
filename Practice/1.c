#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++)
    {
        printf(",%d",i);
    }
    return 0;

}
