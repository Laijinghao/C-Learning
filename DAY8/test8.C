#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int n;
//     printf("输入数组长度: ");
//     scanf("%d",&n);

//     int *arr = (int*)malloc(n * sizeof(int));
//     if (arr == NULL)
//     {
//         printf("内存分配失败\n");
//         return 1;
//     }


//     for (int i=0;i<n;i++)
//     {
//         arr[i]=i * 2;
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");

//     free(arr);
//     return 0;
// }


//指针运算
// int main()
// {
//     int arr[5]={10,20,30,40,50};
//     int *p = arr;
//     printf("初始 p = %p, *p = %d\n",p,*p);
//     p++;
//     printf("p++ 后 p = %p, *p = %d\n",p,*p);
//     p+=2;
//     printf("p+2 后 p = %p, *p = %d\n",p,*p);
//     return 0;
// }


//const和指针
// int a = 5, b = 10;

// // const int *p —— 指向的内容不可变，指针本身可变
// const int *p1 = &a;
// // *p1 = 20;    // 取消注释会报错
// p1 = &b;         // 可以

// // int * const p —— 指针本身不可变，指向的内容可变
// int * const p2 = &a;
// *p2 = 20;        // 可以
// // p2 = &b;      // 取消注释会报错

// // const int * const p —— 两者都不可变
// const int * const p3 = &a;
// // *p3 = 30;     // 报错
// // p3 = &b;      // 报错


//写一个函数，用指针遍历数组并打印，数组参数用 const 修饰，保证函数内不修改数组内容。
// int main()
// {
// int arr[]={0,1,2,3,4,5,6,7,8,9,-1};
// const int *p=arr;
// while (*p!=-1)
// {
//     printf("%d\n",*p);
//     p++;
// }
// return 0;
// }


// 写一个程序，实现以下功能：用户输入数组长度 n。动态分配 n 个整数的内存。用指针运算（p++ 或 p + i）遍历数组，输入 n 个整数。
//定义函数 void process_array(const int *arr, int len, int *sum, int *max, int *min)：arr 用 const 保护，表示只读数组。
// 通过指针参数返回和、最大值、最小值
// 主函数中调用 process_array 并打印结果。
// 最后释放内存。
void process_array(const int *arr,int len,int *sum, int *max,int *min)
{
    *sum=0;
    *max=arr[0];
    *min=arr[0];
    const int *p=arr;
    for(int i=0;i<len;i++)
    {
        *sum+=*p;
        if(*max<*p)
        {
            *max=*p;
        }
        if(*min>*p)
        {
            *min=*p;
        }
        p++;
    }
}
int main()
{
    int n;
    printf("输入数组长度: ");
    scanf("%d",&n);

    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("内存分配失败\n");
        return 1;
    }
    int *p=arr;
    for(int i=0;i<n;i++)
    {
        printf("输入第%d个整数: ",i+1);
        scanf("%d",p);
        p++;
    }
    int sum,max,min;
    process_array(arr,n,&sum,&max,&min);
    printf("数组和: %d\n",sum);
    printf("数组最大值: %d\n",max);
    printf("数组最小值: %d\n",min);
    free(arr);
    return 0;
}