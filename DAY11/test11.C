#include<stdio.h>
#include<string.h>

//初识结构体定义
struct Student
{
    char name[20];
    int age;
    float score;
};
// int main()
// {
//     struct Student stu1={"ljh",20,90.5};
//     struct Student stu2;
//     stu2=stu1;
//     strcpy(stu2.name,"lly");
//     printf("%s %d %.1f\n", stu1.name, stu1.age, stu1.score);
//     printf("%s %d %.1f\n",stu2.name, stu2.age,stu2.score);
//     return 0;
// }
// 结构体数组
// int main()
// {
//     struct Student stu[3]={
//         {"ljh",20,90.5},
//         {"lly",20,88.5},
//         {"zhangsan",21,80}
//     };
//     for(int i=0;i<3;i++)
//     {
//         printf("%s %d %.2f\n",stu[i].name,stu[i].age,stu[i].score);
//     }
//     return 0;
// }


//结构体指针
int main()
{
    struct Student stu={"ljh",20,90.5};
    struct Student *p=&stu;
    printf("姓名:%s 年龄:%d 得分:%.2f\n",stu.name,stu.age,stu.score);
    p->age=21;
    p->score=100;
    printf("姓名:%s 年龄:%d 得分:%.2f\n",p->name,p->age,p->score);
    return 0;
}