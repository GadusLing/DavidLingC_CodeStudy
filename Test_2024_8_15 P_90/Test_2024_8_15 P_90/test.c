#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "Hello World";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//编程常见的错误
//1.编译型错误（语法错误）
//2.链接型错误（出现在链接期间） - 基本上都是因为找不到符号（1.不存在 2.写错了）
//3.运行时错误（最难受，需要调试来解决）
//
//
//
//int main()
//{
//	int a
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulptr;
//	pulptr = pulArray;
//	*(pulptr + 3) += 3;
//	printf("%d, %d\n", *pulptr, *(pulptr + 3));
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int* p = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    char arr[10001] = { 0 };
//    gets(arr);
//
//    int left = 0;
//    int right = strlen(arr) - 1;
//
//    while (left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//
//        left++;
//        right--;
//
//    }
//
//    printf("%s\n", arr);
//
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);//2 5
//	int sum = 0;
//	int k = 0;
//	for (int i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}



//#include <math.h>
//
//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int count = 0;
//		int n = i;
//		int sum = 0;
//		int temp = 0;
//
//		while (n > 0)
//		{
//			count++;
//			n /= 10;
//		}
//
//		temp = i;
//		for (int j = 0; j < count; j++)
//		{
//			int digit = temp % 10;
//			sum += pow(digit, count);
//			temp /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}		
//	}
//
//	return 0;
//}


//#include <math.h>
//
//int is_narcissistic_number(int i)
//{
//	int n = 1;
//	int tmp = i;
//	int sum = 0;
//	while (tmp / 10)
//	{
//		n++;
//		tmp /= 10;
//	}
//
//	tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, n);
//		tmp /= 10;
//	}
//	return sum == i;
//}
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		if (is_narcissistic_number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}



//int main() 
//{
//    int line = 0;
//    scanf("%d", &line);
//    int i = 0;
//    for (i = 0; i < line; i++)
//    {
//        for (int j = 0; j < line - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for (i = 0; i < line - 1; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 2*(line - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//
//    int n = 7;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * i + 1; j++)
//        {
//            printf("%c", a);
//        }
//        printf("\n");
//    }
//
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < i + 1; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * (n - 1 - i) - 1 ; j++)
//        {
//            printf("%c", a); 
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//自写
//int main()
//{
//	int money = 20;
//	int n = 0;
//	int k = 0;
//
//	for (money = 20; money > 0; money--)
//	{
//		n++;
//		k++;
//		if (k >= 2)
//		{
//			money++;
//			k = 0;
//		}
//	}
//
//	printf("%d %d", n, k);
//
//
//	return 0;
//}


//文心
//#include <stdio.h>  
//
//int main() {
//    int initialMoney = 20; // 初始金额  
//    int n = 0; // 总共获得的汽水数量  
//    int k = 0; // 当前持有的空瓶数量  
//
//    // 用初始金额购买汽水  
//    n = initialMoney;
//    k = initialMoney; // 购买后，同时也获得了相同数量的空瓶  
//
//    // 当有空瓶时，尝试用空瓶换汽水  
//    while (k >= 2) {
//        int newBottles = k / 2; // 每次可以换购的汽水数量  
//        n += newBottles; // 更新总共获得的汽水数量  
//        k = newBottles + k % 2; // 更新空瓶数量（包括新换得的和新剩余的）  
//    }
//
//    // 输出结果  
//    printf("总共可以喝到 %d 瓶汽水，最后剩下 %d 个空瓶。\n", n, k);
//
//    return 0;
//}


//教学
//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//	//置换
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	
//	return 0;
//}

//int main()
//{
//	int money = 20;
//
//	if (money > 0)
//	{
//		printf("%d\n", 2 * money - 1);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//	
//
//	return 0;
//}







