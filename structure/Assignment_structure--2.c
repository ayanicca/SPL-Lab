#include<stdio.h>


struct date
{
    int day;
    int month;
    int year;
};

void main()
{
    struct date x[5];
    int i,j,k,l,m,d;

    for (i=0; i<5; i++)
    {


        printf("Enter %d date(dd/mm/yyyy): ",i+1);
        scanf("%d%d%d",&x[i].day,&x[i].month,&x[i].year);
    }
    printf("\n");
//	Print the stored data as output
    for (i=0; i<5; i++)
    {


        printf(" %d date(dd/mm/yyyy): ",i+1);
        printf("%d %d %d ",x[i].day,x[i].month,x[i].year);
        printf("\n");
    }
    printf("\n");
    i=0;
//	Print the oldest date
    k=x[i].year;


    for (i=0; i<5; i++)
    {

        for(j=i+1; j<5; j++)
        {


            if(x[i].year!=x[j].year)
            {
                if(k>x[j].year)
                {
                    k=x[j].year;
                    l=j;

                }
            }
        }
    }
    printf("Day=%d, Month=%d, year=%d. \n",x[l].day,x[l].month,x[l].year);

    //Print the dates that fall on a leap year
    for(i=0; i<5; i++)
    {
        if (x[i].year % 400 == 0)
        {
            printf("%d is a leap year.\n", x[i].year);
        }

        else if (x[i].year % 100 == 0)
        {
            printf("%d is not a leap year.\n",x[i].year);
        }

        else if (x[i].year % 4 == 0)
        {
            printf("%d is a leap year.\n", x[i].year);
        }
        else
        {
           printf("There is no Loop Year\n");
        }

    }
    //Take a month as input. Print the dates that fall on that month
    for(i=0; i<5; i++)
    {
        if(x[i].month == 1)
        {
            printf("%d year is 31 days\n",x[i].year);
        }
        else if(x[i].month == 2)
        {
            printf("%d year is 28 or 29 days\n",x[i].year);
        }
        else if(x[i].month == 3)
        {
            printf("%d year is 31 days\n",x[i].year);
        }
        else if(x[i].month == 4)
        {
            printf("%d year is 30 days\n",x[i].year);
        }
        else if(x[i].month == 5)
        {
            printf("%d year is 31 days\n",x[i].year);
        }
        else if(x[i].month == 6)
        {
            printf("%d year is 30 days\n",x[i].year);
        }
        else if(x[i].month == 7)
        {
            printf("%d year is 31 days\n",x[i].year);
        }
        else if(x[i].month == 8)
        {
            printf("%d year is 31 days\n",x[i].year);
        }
        else if(x[i].month == 9)
        {
            printf("%d year is 30 days\n",x[i].year);
        }
        else if(x[i].month == 10)
        {
            printf("%d year is 31 days\n",x[i].year);
        }
        else if(x[i].month == 11)
        {
            printf("%d year is 30 days\n",x[i].year);
        }
        else if(x[i].month == 12)
        {
            printf("%d year is 31 days\n",x[i].year);
        }

    }






}
