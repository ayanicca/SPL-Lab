#include<stdio.h>
int main()
{
    int n,i=0,x,sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
   while(n!=0)
    {
        x=n%10;
        n=n/10;
        i++;
        sum=sum+x;

    }
    printf("The number has %d digits which sum to %d",i,sum);
    return 0;
}

