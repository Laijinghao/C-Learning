#include<stdio.h>
int main()
{
    // for(int i=0;i<10;i++)
    // {
    //     printf("%d\n",i);
    // }
    // int sum=0;
    // for (int i=1;i<=100;i++)
    // {
    //     sum+=i;
    // }
    // printf("1+100=%d\n",sum);
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // for (int i=0;i<10;i++)
    // {
    //     printf("arr[%d]=%d\n",i,arr[i]);
    // }
int arr[5];
int sum=0;
int max;
int i;
printf("请输入5个整数:");

for (i=0;i<5;i++)
{
scanf("%d",&arr[i]);
sum+=arr[i];
if (i==0)
{
    max=arr[i];
}
else
{
    if (arr[i]>max)
    {
        max=arr[i];
    }
}
}
double average=sum/5.0;
printf("平均值为:%f\n",average);
printf("最大值为:%d\n",max);    
return 0;
}