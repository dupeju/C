#include <stdio.h>
#include <limits.h>

int main(){
	printf("signed char max:%d\n", CHAR_MAX);
	printf("signed char min:%d\n", CHAR_MIN);
	printf("unsigned char max:%d\n", UCHAR_MAX);
	printf("unsigned char min:%d\n", 0);
	printf("signed int max:%d\n", INT_MAX);
	printf("signed int min:%d\n",INT_MIN);
	printf("unsigned int max:%u\n", UINT_MAX);
	printf("unsigned int min:%d\n", 0);
	printf("signed short max:%d\n", SHRT_MAX);
	printf("signed short min:%d\n", SHRT_MIN);
	printf("unsigned short max:%d\n", USHRT_MAX);
	printf("unsigned short min:%d\n", 0);
	printf("signed long max:%ld\n", LONG_MAX);
	printf("signed long min:%ld\n", LONG_MIN);
	printf("unsigned long max:%u\n", ULONG_MAX);
	printf("unsigned long min:%u\n", 0);
	return 0;
}