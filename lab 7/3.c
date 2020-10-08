#include<stdio.h>
#include<math.h>
float calc_mean(int x[],int num)
{
    float mean,sum=0;
    int i;
    for(i=0; i<num; i++)
    {
        sum=sum+x[i];
    }
    mean=sum/num;
    return mean ;

}
float  calc_std(int y[],int num)
{
    float mean,x,sum=0,SD;
    int i;
    for(i=0; i<num; i++)
    {
        sum=sum+y[i];
    }
    mean=sum/num;
     for(i=0; i<num; i++)
     {
        x=x+pow(y[i]-mean,2) ;
     }

SD=sqrt(x/10);




    return SD;

}
int main()
{
    int n,i;

    float a,b;
    printf("How many  Number:");
    scanf("%d",&n);
    int m[n];
    printf("Enter the Number:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&m[i]);
    }
    a=calc_mean(m,n);
   b=calc_std(m,n);
        printf("Mean:%.2f\n",a);
    printf("Standard Deviation:%.4f\n",b);
    return 0;

}
