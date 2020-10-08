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
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }


    }
    printf("The sum of even numbers is: %d\n",sum);

    return 0;

}


