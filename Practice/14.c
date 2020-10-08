#include<stdio.h>
int main()
{
    int i,n,k,l=2,m,sum=0;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        k=i*l;

        m=i+l;
       sum=sum+k;

        l=m;


    }
    printf("Result:%d\n",sum);
    return 0;
}



