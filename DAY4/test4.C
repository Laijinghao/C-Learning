#include <stdio.h>
int main()
{
    //二维数组的定义和初始化
    // int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12,}};
    // int i,j;
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<4;j++)
    //     {
    //         printf("%4d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // return 0;


    //用户输入数组
//     int arr[2][3];
//     printf("请输入6个整数:\n");
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%2d",arr[i][j]);
//         }
//     printf("\n");
// }
//     return 0;


//冒泡序列
int arr[10];
int i,j,temp;
printf("请输入10个整数:\n");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
} 
for (i=0;i<9;i++)
{
    for(j=0;j<9-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(i=0;i<10;i++)
    {
        printf(" %2d",arr[i]);
    }
}
return 0;
    }