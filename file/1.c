#include<stdio.h>

struct student
{
    char name[100];
    char id[10];
    float marks[3];

};
int main()

{

    struct student s[5];
    int i,j,k,z;
    float sum=0,ch[20];
    char a[10];
    FILE *x,*y;
    x=fopen("input.txt","r");

    if (x == NULL)
    {
        printf("File does not exist");
    }

    //input
else{
        for(i=0; i<5; i++)
        {

            fgets(s[i].name,100,x);

            fgets(s[i].id,10,x);

            for(j=0; j<3; j++)
            {
                fscanf(x,"%f",&s[i].marks[j]);
            }
            fgets(a,"%c",x);

        }
        fclose(x);

}

    //output

    y=fopen("output.txt","w");
    if (y == NULL)
    {
        printf("File does not exist");
    }
    else {

        for(i=0; i<5; i++)
        {
            fputs(s[i].name,y);
            fputs(s[i].id,y);
            for(j=0; j<3; j++)
            {
                fprintf(y,"%.2f\n",s[i].marks[j]);

            }
        }
 // average marks of each student
       fprintf(y,"**Average marks of each student**\n");
         for(i=0; i<5; i++)
        {

            for(j=0; j<3; j++)
            {
                sum=sum+s[i].marks[j];
                ch[i]=sum;

            }
            fputs(s[i].name,y);
            fprintf(y,"%.2f \n",sum/3);
            sum=0;
        }
        //name and id of the student with maximum total marks
fprintf(y,"**Name and id of the student with maximum total marks**\n");
i=0;
        z=0;
        for(i=0; i<5; i++)
        {

           if(z<ch[i])
           {
               z=ch[i];
               k=i;
           }



        }
         fputs(s[k].name,y);
         fputs(s[k].id,y);




        printf("File written successfully\n ");
        fclose(y);

    }



    return 0;
}
