#include<stdio.h>
void main()
{
    int n,i,m,x;

printf("Enter a Number:");
    scanf("%d",&n);
     printf("Output:");
    while(n!=0)
    {
        m=n%10;
         printf("%d",m);
        x=n/10;
        n=x;



    }


}

