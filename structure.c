#include<stdio.h>
int main()
{

    struct stu
    {
        char name[20];
        int age;
    };

    struct stu s1,s2,s3,*s;
    s=&s3;

    //printf("Enter the details of ");
    //scanf("%s %d",s2.name,&s2.age);
    //printf("%s %d\n",s2.name,s2.age);

    //intializition via pointer in c
    
    
    
    scanf("%s %d", &(s ->name), &(s->age));
    printf("%s %d \n", s->name , s->age );
    printf("Address of s3=%u and address of *s = %u\n", &s3,&s);
    printf("Value stored in *s = %u\n",s);


    return 0;
    


    

}