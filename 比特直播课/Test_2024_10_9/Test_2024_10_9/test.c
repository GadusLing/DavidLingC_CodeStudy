﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	if (*((char*)&a) == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int check_sys()
//{
//	int a = 1;
//	//小端返回1，大端返回0
//	return *((char*)&a);
//}
//
//int main()
//{
//	if (1 == check_sys())
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000 00000000 00000000 00000001    
//	//11111111 11111111 11111111 11111110   
//	//11111111 11111111 11111111 11111111
//	//11111111
//	//有符号整型提升高位按符号位补0or1
//	//整型提升后的补码 11111111 11111111 11111111 11111111，还原后就是-1
//	//截断了，只保留了低8个bit位的数字
//	signed char b = -1;//11111111
//	//整型提升后的补码 11111111 11111111 11111111 11111111，还原后就是-1
//	unsigned char c = -1;//11111111
//	//无符号整型提升高位补0
//	//整型提升后的补码 00000000 00000000 00000000 11111111，还原后就是255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//%d - 打印有符号整数
//	//%u - 打印无符号整数
//	//这里需要发生整型提升
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	//10000000
//	//VS中的char是按有符号算的，所以整型提升后是11111111 11111111 11111111 10000000
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000 00000000 00000000 10000000
//	//10000000
//	//VS中的char是按有符号算的，所以整型提升后是11111111 11111111 11111111 10000000
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//#include <stdio.h>
//
//unsigned char i = 0;//0~255
//
//int main()
//{
//	for (i = 0; i <= 255; i++)//循环判断恒成立，死循环
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	unsigned int i;//无符号整形没有负数，--不到负数
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);//休眠100毫秒
//	}
//	return 0;
//}



#include <stdio.h>
//X86环境 ⼩端字节序

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%#x,%#x", ptr1[-1], *ptr2);
	return 0;
}