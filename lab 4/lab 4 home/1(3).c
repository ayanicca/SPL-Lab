#include<stdio.h>
int main()
{
      int i,j,n, a=1,k;
      printf("Enter a Number: ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          for(k=i;k<n;k++)
          {
              printf(" ");
          }
            for(j=1;j<=i;j++)
            {
                  printf("%d",a);
                  a=a+2;
            }
            a=1;
            printf("\n");
      }
      return 0;
}
