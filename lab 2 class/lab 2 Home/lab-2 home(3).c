#include<stdio.h>
int main()
{
    int k,i,m=1,n=2,x,y,sum=0;
    printf("How many terms:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        x=m*n;

        y=m+n;
        m++;
        n=y;
        sum=sum+x;


    }
    printf("The series sum is: %d ",sum);
    return 0;
}

