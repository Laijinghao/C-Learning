 #include <stdio.h>
//  int main()
//  {
//     int target =10;
//     int guess = 0;
//     while (guess != target)
//     {
//         printf("请输入一个数字:");
//         scanf("%d",&guess);
//         if (guess < target)
//         {
//             printf("too small\n");
//         }
//         else if(guess > target)
//         {
//             printf("too big\n");
//         }
//         else{
//             printf("great\n");
//         }
//     }
// return 0; 
// }
int main()
{
    int number =1;
    while (number<=100)
    {
        if (number%3==0){
        printf("%d\n",number);
        }
 number++;
    }
    return 0;
}