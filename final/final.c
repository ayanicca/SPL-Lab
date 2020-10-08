#include<stdio.h>

struct student
{
    char name[100];
    char id[10];
    float marks[3][4];
    float cgpa;
};

void print (struct student st[]);
void printtotal(struct student st[]);
void maxCGPA(struct student st[]);
void minCGPA(struct student st[]);

int main()
{
    struct student s[10];
    FILE *x;
    int i,j,l;
    char a[20];

    x=fopen("input.txt","r");

    if (x == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        for(i=0; i<10; i++)
        {

            fgets(s[i].name,100,x);
            fgets(s[i].id,10,x);
            for(j=0; j<3; j++)
            {
                for(l=0; l<4; l++)
                {
                    fscanf(x,"%f",&s[i].marks[j][l]);
                }
            }

            fscanf(x,"%f",&s[i].cgpa);
              fgets(a,"&c",x);

        }
        print(s);
        printtotal(s);
        maxCGPA(s);
        minCGPA(s);

    }
    fclose(x);
    return 0;
}

//Print the stored data as output in file

void print (struct student st[])
{
    int i,j,l;
    FILE *y;
    y=fopen("output.txt","w");
    if (y == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        for(i=0; i<10; i++)
        {
            fprintf(y,"Student %d\n",i+1);
            fprintf(y,"Name:");
            fputs(st[i].name,y);
            fprintf(y,"ID:");
            fputs(st[i].id,y);
            fprintf(y,"\n");
            for(j=0; j<3; j++)
            {
                fprintf(y,"Subject %d marks:",j+1);
                for(l=0; l<4; l++)
                {
                    fprintf(y,"%.1f ",st[i].marks[j][l]);
                }
                fprintf(y,"\n");
            }
            fprintf(y,"CGPA:");

           fprintf(y,"%.1f\n",st[i].cgpa);
        }
        printf("File written successfully.\n");
        fclose(y);
    }

}

//Print the total marks of each student for each subject

void printtotal(struct student st[])
{
    int i,j,l;
    float sum=0;
    FILE *y;
    y=fopen("output.txt","a");
    if (y == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        for(i=0; i<10; i++)
        {
            fprintf(y,"Student %d\n",i+1);

            for(j=0; j<3; j++)
            {
                fprintf(y,"Subject %d total:",j+1);

                for(l=0; l<4; l++)
                {
                    sum=sum+st[i].marks[j][l];
                }
                fprintf(y,"%.1f \n",sum);
                sum=0;
            }
        }
        fclose(y);
    }
}

//Print the maximum  CGPA

void maxCGPA(struct student st[])
{
    int i,j,l;
    float k=0;
    FILE *y;
    y=fopen("output.txt","a");
    if (y == NULL)
    {
        printf("File does not exist");
    }
    else
    {

        for(i=0; i<10; i++)
        {
            if(k<st[i].cgpa)
            {
                k=st[i].cgpa;
            }
        }
        fprintf(y,"Maximum CGPA: ");
        fprintf(y,"%.1f \n",k);
        fclose(y);
    }
}

////Print the minimum CGPA

void minCGPA(struct student st[])
{
     int i,j,l;
    float k=4.1;
    FILE *y;
    y=fopen("output.txt","a");
    if (y == NULL)
    {
        printf("File does not exist");
    }
    else
    {

        for(i=0; i<10; i++)
        {
            if(k>st[i].cgpa)
            {
                k=st[i].cgpa;
            }
        }
        fprintf(y,"Minimum CGPA: ");
        fprintf(y,"%.1f \n",k);
        fclose(y);
    }
}





