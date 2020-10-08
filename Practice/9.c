#include<stdio.h>
int main ()
{
    int n,i,j=2;
    scanf("%d",&n);
   printf("%d",j);
    for(i=2; i<=n; i++)
    {
        j=j+2;
        if(i%2==0)
            printf(",-%d",j);
            else
            printf(",%d",j);




    }
    return 0;

}

