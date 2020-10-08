#include<stdio.h>
int main ()
{
    int n,i=1;
    scanf("%d",&n);
   printf("%d",i);
    for(i=2; i<=n; i++)
    {
        if(i%2==0)
            printf(",-%d",i);
            else
            printf(",%d",i);



    }
    return 0;

}
