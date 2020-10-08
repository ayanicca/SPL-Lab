#include <stdio.h>
struct student  {
    char name[50];
    char id[20];
    float marks[3];
} ;

int main()

 {

     struct student s[5];
     int i,j,l;
     float sum=0,k=1;
     char a[10];


     for(i=0;i<5;i++)
     {

        printf("Student:%d \n",i+1);
         printf("Enter Name:");
         gets(s[i].name);
          printf("Enter ID:");
          gets(s[i].id);


          printf("Enter Marks :");
          for(j=0;j<3;j++)

          {

              scanf("%f",&s[i].marks[j]);

          }
         gets(a); // (ignr Enter )using a string for ignor enter

     }
      printf("\nPrint the stored data as output\n\n");
     for(i=0;i<5;i++)
     {

         printf("Student :%d\n",i+1);
         printf("Name:");
        puts(s[i].name);
          printf("ID:");
          puts(s[i].id);
          printf("Exam Marks=");
          for(j=0;j<3;j++)
          {
              printf("%.2f, ",s[i].marks[j]);

          }
            printf("\n");




     }
     printf("\nPrint the average marks of each student.\n\n");
     for(i=0;i<5;i++)
     {
         for(j=0;j<3;j++)
         {
             sum=sum+s[i].marks[j];
         }
          printf("Student %d: %.2f\n",i+1,sum/3);
         if(k<sum)
         {
             k=sum;
             l=i;


         }
         sum=0;

     }
printf("\n\nPrint the name and id of the student with maximum total marks.\n\n");
     for(i=0;i<5;i++)
     {
         if(l==i)
         {
              printf("Name:");
            puts(s[i].name);
          printf("ID:");
          puts(s[i].id);

         }

     }






    return 0;
}
