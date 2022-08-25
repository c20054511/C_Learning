#include<stdio.h>

//while循环
/* int main()
{
    int line = 0;
    while(line<10)
    {
        printf("%d\n",line);
        line = line+1;
    }
    return 0;
} */


// 通过函数实现输入数字相加后打印
/* int Add(int x,int y)    //定义函数
{
    int z = x + y;
    return z;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    // 输入
    scanf("%d %d",&num1,&num2);
    //保存函数返回值
    sum = Add(num1,num2);
    printf("%d\n",sum);
    return 0;
} */


//数组的定义
/* int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    char ch[4] = {'a','b','c','d'}; //字符数组
    char ch1[6] = {"hello"};
    printf("%s\n",ch1);
    return 0;
} */


//数组的下标
/* int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //数组的下标为   0,1,2,3,4,5,6,7,8,9
    printf("下标为2:%d\n",arr[2]);
    printf("下标为8:%d\n",arr[8]);
    return 0;
} */


//使用while循环来打印数组中所有的整数
/* int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int num = 0;
    while (num <= 9)
    {
        printf("%d\t",arr[num]);
        num = num + 1;
    }
    return 0;
} */


//解决使用除法没有小数
/* int main()
{
    float a = 7/2.0;
    printf("%lf\n",a); 
    return 0;
} */


// % 的用法
/* int main()
{
    int a = 7%2;    //商3 余1
    printf("%d\n",a);
    return 0;
} */


// & 按位与，二进制，同时为1则为1，反之为0
/* int main()
{
    int a = 3;          //00000000 00000000 00000000 00000011   
    int b = 5;          //00000000 00000000 00000000 00000101
    int c = a & b;      //00000000 00000000 00000000 00000001
    printf("C：%d\n",c);
    return 0;
}
 */

// ｜ 按位或，二进制，有一个1就为1，反之为0
/* int main()
{
    int a = 3;         //00000000 00000000 00000000 00000011   
    int b = 5;         //00000000 00000000 00000000 00000101
    int c = a | b;    //00000000 00000000 00000000 00000111
    printf("C：%d\n",c);
    return 0;
} */


// ^ 按位异或，二进制，相同则为0，相异则为1
int main()
{
    int a = 3;         //00000000 00000000 00000000 00000011   
    int b = 5;         //00000000 00000000 00000000 00000101
    int c = a ^ b;     //00000000 00000000 00000000 00000110
    printf("C：%d\n",c);
    return 0;   
}