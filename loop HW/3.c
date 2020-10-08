#include<stdio.h>
int main()
{
    int i,n,k,l=2,m,sum=0;
    printf("How many terms:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        k=i*l;
        sum=sum+k;
        m=i+l;

        l=m;


    }
    printf("The series sum is:%d\n",sum);
    return 0;
}


