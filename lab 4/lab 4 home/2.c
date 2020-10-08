#include<stdio.h>
int main ()
{
    int i,n,j,k,l,m,g;
    printf("Enter a Number:");
    scanf("%d",&n);
    k=n/2;
    l=n-2;
    for(i=1;i<=n;i++)
    {

        if(i!=k+1)
        {
            for(j=1;j<=2;j++)
        {
            printf("H");
            for(m=1;m<=l;m++)
            {
                printf(" ");
            }
        }
        printf("\n");

        }

      if(i==k+1)
        {
            for(g=1;g<=n;g++)
            {
                printf("H");
            }
              printf("\n");
        }



    }

    return 0;
}




