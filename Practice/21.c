#include<stdio.h>
int main()
{
    int x,y;
    char a,b[10];

   printf("Enter a Nnumber:");
    scanf("%d%d",&x,&y);
     printf("Result is:%d\n",x*y);


    while(1)
    {



gets(b);

    printf("Do you want you again Type 'Y' OR 'N'\n");
     scanf("%c",&a);
    if(a=='Y'||a=='y')
    {
        printf("Enter a Nnumber:");
        scanf("%d%d",&x,&y);
            printf("Result is:%d\n",x*y);

    }
    else
    {

         break;

    }

    }

    return 0;

}
