#include<stdio.h>
int main ()
{
    int k,sum=0,avg,max=1,i;
     printf("Enter How many number:");
    scanf("%d",&k);
    int a[k];
    printf("Enter the numbers:");
    for(i=0; i<k; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<k; i++)
    {
        sum=sum+a[i];
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Sum:%d\n",sum);
     printf("Average:%d\n",sum/k);
     printf("Maximum: %d\n",max);
    return 0;

}

