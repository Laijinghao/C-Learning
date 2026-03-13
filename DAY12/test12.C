#include<stdio.h>
#include<stdlib.h>

//动态创建结构体数组
// struct Student
// {
//     char name[20];
//     int age;
// };
// int main()
// {
//     int n;
//     printf("请输入学生人数:");
//     scanf("%d", &n);
// struct Student*stu=(struct Student*)malloc(n*sizeof(struct Student));
// if (stu==NULL)
// {
//     return 1;
// }
//     for(int i=0;i<n;i++)
//     {
//         printf("请输入第%d个学生的姓名和年龄:",i+1);
//         scanf("%s %d",stu[i].name,&stu[i].age);
//     }
//     printf("\n学生信息如下: \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%s %d\n",stu[i].name,stu[i].age);
//     }
//     free(stu);
//     return 0;
// }

struct Node
{
    int date;
    struct Node *next;
};
int main()
{
    struct Node *n1=(struct Node*)malloc(sizeof(struct Node));
    struct Node *n2=(struct Node*)malloc(sizeof(struct Node));
    struct Node *n3=(struct Node*)malloc(sizeof(struct Node));
    n1->date=1;
    n2->date=2;
    n3->date=3;
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    struct Node *p=n1;
    while(p!=NULL)
    {
        printf("%d",p->date);
        p=p->next;
    }
    free(n1);
    free(n2);
    free(n3);
    return 0;
}