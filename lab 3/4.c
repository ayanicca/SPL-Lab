#include <stdio.h>

int main()
{
   int x[1000],i,k,m,n,l;
   printf("How many numbers:");
   scanf("%d",&k);
   printf("Enter the numbers: ");
   for(i=0;i<k;i++)
   {
       scanf("%d",&x[i]);
   }
    printf("Enter number to be inserted and position: ");
   scanf("%d%d",&n,&m);
   for(i=k-1;i>=m;i--)
   {
       x[i+1]=x[i];

   }
       x[m]=n;
   printf("The result is: ");
   for(l=0;l<=k;l++)
   {
       printf("%d ",x[l]);
   }


   return 0;
}
