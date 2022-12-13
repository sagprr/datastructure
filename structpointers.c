#include<stdio.h>
#include<stdlib.h>


struct stu
{
    int frl;
    struct stu *link;
};

int main()
{
    struct stu *s,*temp;
    s= NULL;   //dangling pointer 

    int x;
    scanf("%d",&x);
    temp = (struct stu *)malloc(sizeof(struct stu));
    temp ->frl=x;
    temp ->link =NULL;

    s=temp;
    printf("%d %u \n", s->frl, s->link);
    return 0;



    

}
