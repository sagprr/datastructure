#include<stdio.h>
#include<stdlib.h>

struct stu
{
    int fr_l;
    struct stu *link;
};


int main()
{
    struct stu *s, *temp;
    s = NULL; // dangling pointer
    int x;
    // printf("enter the s2 details\n");
    // scanf("%s%d",s2.name,&s2.age);
    // printf("size of stu = %d\n",sizeof(struct stu));


    // scanf("%s%d",&(s->name),&(s->age));
    // printf("%s %d\n",s->name,s->age);
    // printf("Address of s3 =%u and address of *s = %u\n",&s3,&s);
    // printf("value stored in *s - %u\n",s);

    scanf("%d",&x);
    temp = (struct stu *)malloc(sizeof(struct stu));
    temp->fr_l = x;
    temp->link = NULL;
    s = temp;


    temp = (struct stu *)malloc(sizeof(struct stu));
    temp->fr_l = x+90;
    temp->link = NULL;
    s->link = temp;

    
    printf("%d %u\n",s->fr_l, s->link);
    s = s->link;
    printf("%d %u\n",s->fr_l, s->link);
    return 0;

    
}