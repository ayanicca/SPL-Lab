#include<stdio.h>
int prime(number)
{
    int i,k=0;
    for(i=2;i<=number/2;i++)
    {
       if(number%i==0)
       {
          k=1;
          break;
       }
       else
        k=0;
    }
    if(k==0)
    {
        printf("The Number is Prime ");
    }
    else
         {
        printf("The Number is composite");
    }

}
void main()
{
    int n,x;
    printf("Enter a Number:");
    scanf("%d",&n);
    x=prime(n);
}

