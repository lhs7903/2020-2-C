//file: variousop.c
#include <stdio.h>

int main(void)
{
	int i;
	int* pi = &i;
	int** dpi = &pi;

	*pi = 5;
	*pi += 1;
	printf("%d\n", i);

	//후위 연산자 pi++는 전위 연산자보다 *pi보다 빠름
	printf("%d\n", (*pi)++);
	printf("%d\n", *pi);

	*pi = 10;
	printf("%d\n", ++ * pi);
	printf("%d\n", ++ * *dpi);
	printf("%d\n", i);

	return 0;
}