#include<iostream>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	int a, b, c, x;
	setlocale(LC_ALL, "Russian");
	printf("¬ведите значение а: ");
	scanf_s("%d", &a);
	printf("¬ведите значение b: ");
	scanf_s("%d", &b);
	printf("¬ведите значение c: ");
	scanf_s("%d", &c);
	printf("¬ведите значение d: ");
	scanf_s("%d", &x);
	if (a == x)
		b = a;
	if (a != x && a == c)
		b = 0;
	if (a != x || a != c)
		b = 1;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("x = %d\n", x);

}
