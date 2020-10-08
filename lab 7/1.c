#include<stdio.h>
int check_num(number)
{
    if(number>0)
    {
        printf("The Number is Positive");
    }
    else if(number<0)
    {
        printf("The Number is Negative");
    }
   else  if(number==0)
    {
        printf("The Number is zero");
    }
}
void main()
{
    int n,x;
    printf("Enter a Number:");
    scanf("%d",&n);
    x=check_num(n);
}
