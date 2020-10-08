#include<stdio.h>
#include<math.h>
float calc_circ(radius)
{
float y;
    y=2*3.1416*radius;

        return y ;

}
float calc_area(radius)
{
    float x;
    x=3.1416*radius*radius;

        return x;

}
int main()
{
    int n;
    float x,y;
    printf("Enter a Number:");
    scanf("%d",&n);
    x=calc_area(n);
    y=calc_circ(n);
    printf("Area:%.2f\n",x);
    printf("circumference:%.2f\n",y);
    return 0;

}
