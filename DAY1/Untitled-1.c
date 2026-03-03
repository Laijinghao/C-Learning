#include <stdio.h>
int main()
{
  // int F;
   //float C;
  // printf("输入华氏温度: \n");
  // scanf("%d",&F);
  // C=(F-32)/1.8;
  // printf("摄氏度为：%.2f\n",C);
   //return 0;
   //int a,b;
   //printf("输入长和宽为: \n");
   //scanf("%d%d",&a,&b);
   //printf("面积为: %d\n",a*b);
  // return 0;
int a,b;
int temp;
printf("输入两个整数: ");
scanf("%d%d",&a,&b);
printf("交换前整数: %d,%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("交换后整数: %d,%d\n",a,b);
return 0;
}