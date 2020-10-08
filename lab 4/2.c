#include<stdio.h>>
int main ()
{
    int i,n,j;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i%2!=0)
            {
                if(j%2==0)
                {
                    printf("0");
                }
                else
                    printf("1");

            }

            if(i%2==0)
            {
                if(j%2!=0)
                {
                    printf("0");
                }
                else
                    printf("1");

            }




        }







        printf("\n");

    }
    return 0;
}

