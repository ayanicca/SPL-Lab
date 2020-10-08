#include<stdio.h>
int main ()
{

    int a[5][3];
    int i,j,sum=0,k=0,l=0,m=0;

    for(i=0;i<=4;i++)
    {
        printf("Enter marks student %d:",i+1);
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

printf("\n");
    for(i=0;i<=4;i++)
    {

        for(j=0;j<=2;j++)
        {

           sum=sum+a[i][j];

        }
        printf("Average marks for students %d: %d\n",i+1,sum/3);
        sum=0;

    }
     for(i=0;i<=4;i++)
    {

        for(j=0;j<=2;j++)
        {

           if(a[i][0]>k )
           {
               k=a[i][0];

           }
           if(a[i][1]>l )
           {
               l=a[i][1];

           }
            if(a[i][2]>m )
           {
               m=a[i][2];

           }

        }



    }
     printf("\nMax marks for Subject 1: %d\n",k);
      printf("Max marks for Subject 2: %d\n",l);
      printf("Max marks for Subject 3: %d\n",m);




    return 0;
}
