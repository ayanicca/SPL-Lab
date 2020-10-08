#include<stdio.h>
#include<math.h>
int calc_power(num,num1)
{
    int i,k;

    k=pow(num,num1);

        printf("The result is:%d",k);


}
void main()
{
    int n,m,x;
    printf("Enter X and Y:");
    scanf("%d%d",&n,&m);
    if(n<0 ||m<0)
    {
         printf("Erro! Number is negative\n");

    }
    else
    x=calc_power(n,m);
}


