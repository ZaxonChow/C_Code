#include <stdio.h>
#include<math.h>

int main()
{
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (1 == i % 2)
			printf("%d\n", i);
	}
	/*int num = 4;
	if (4 == num)
		printf("hehe\n");*/
	/*int a = 0;
	int b = 2;
	if (1 == a)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	/*int age = 45;
	if (age < 18)
		printf("未成年");
	else if (age < 28)
		printf("青年\n");
	else if (age < 50)
		printf("壮年\n");
	else if (age < 90)
		printf("老年\n");
	else
		printf("老不死\n");*/
	/*if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");*/
	return 0;
}

//int main()
//{
//	int a, b;
//	a = 0;
//	b = 1;
//	printf("a + b = %d\n", a + b);
//	return 0;
//}