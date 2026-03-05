#include <stdio.h>


//简单程序比较大小
// int max(int a,int b)
// {
//     if (a>b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
//     return 0;
// }
// int main()
// {
//     int x=10,y=5;
//     int result=max(x,y);
//     printf("最大值为: %d\n",result);
//     return 0;
// }


//计算数组元素的和
// int sumArray(int arr[],int len)
// {
//     int sum =0;
//     for(int i=0;i<len;i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     int result = sumArray(a,5);
//     printf("数组和= %d\n",result);
//     return 0;
// }



//求数组和、平均值、最大值
int sumArray(int arr[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int maxArray( int arr[],int len)
{
    int max=arr[0];
    for(int i=0;i<len;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int sum = sumArray(a,5);
    int max = maxArray(a,5);
    double average = sum/5.0;
    printf("数组和= %d\n",sum);
    printf("数组平均值= %f\n",average);
    printf("数组最大值= %d\n",max);
    return 0;
}