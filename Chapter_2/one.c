#include <stdio.h>
void one_three(void), two(void);
void one_three(void)
{
	printf("one\n");
}
void two(void)
{
	printf("three\n");
}
int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("two\n");
	two();
	return 0;
}

