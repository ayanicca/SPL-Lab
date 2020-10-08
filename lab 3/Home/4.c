#include<stdio.h>
#define max 15
int main()
{
    int i,n,j,count=0;
    int x[max],y[max];

printf("Enter the numbers: ");
    for(i=0; i<max; i++)
    {
        scanf("%d",&x[i]);
        y[i]=-1;
    }

    // Print frequency  element

    for(i=0; i<max; i++)
    {
        for(j=i+1; j<max; j++)
        {
            if(x[i]>x[j])
            {
                n=x[i];
                x[i]=x[j];
                x[j]=n;
            }
        }
    }



// Print frequency of each element

    for(i=0; i<max; i++)
    {
        count=1;
        for(j=i+1; j<max; j++)
        {
            if(x[i]==x[j])
            {
                count++;
                y[j]=0;
            }
        }
        if(y[i]!=0)
        {
            y[i]=count;
        }
    }

printf("The frequencies of the numbers are:  ");
    for(i=0; i<max; i++)
    {
        if(y[i]!=0)
        {
            printf("%d  ",y[i]);
        }



    }







    return 0;
}
