#include<stdio.h>
int main ()
{

    int a[5][4],b[5];
    int i,j,sum=0,k=100,l=1,m=1,n;

    for(i=0; i<=4; i++)
    {
        printf("Enter student %d marks :",i+1);
        for(j=0; j<=3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    for(i=0; i<=4; i++)
    {

        for(j=0; j<=3; j++)
        {

            sum=sum+a[i][j];
            b[i]=sum;

             if(a[i][0]>m )
           {
               m=a[i][0];
               n=i;

           }


        }
        printf("Total  marks of students %d: %d\n",i+1,sum);


        sum=0;

    }


for(i=0;i<=4;i++)
{
    if(b[i]<k)
    {
        k=b[i];
        l=i;
    }

}
 printf("student with lowest total marks : %d\n",l+1);

printf("student with highest attendance : %d\n",n+1);






    return 0;
}
