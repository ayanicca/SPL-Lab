#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,avg=0,max=1,x;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x);
        sum=sum+x;
        if(x>max)
        {
            max=x;
        }
    }
    printf("The sum is: %.2f\n",sum);
    printf("The average is:%.2f\n",sum/n);
     printf("The maximum is:%.2f\n",max);

    return 0;
}


