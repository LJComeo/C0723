#include <stdio.h>
#include <stdlib.h>

#define sum(a,b,c) a+b+c
#define MA(x,y) (x*y)

int f(int n)
{
	static int i = 1;
	if (n >= 5)
		return n;
	n = n + i;
	i++;
	return f(n);
}

int func()
{
	int i, j, k = 0;
	for (i = 0, j = -1; j = 0; i++, j++)
	{
		k++;
	}
	return k;
}

int main()
{
	//int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int *p = a;
	//printf("%d %d %d %d", a[p - a], *a, *p, a);//a[0] a[0] a[0] a[0]µÄµØÖ·

	//int a[] = { 0, 2, 4, 6, 8, 10 };
	//int *p = a + 1;
	//printf("%d", *(--p));//0

	/*int i = 3;
	int j = 2;
	printf("%d\n", i*sum(i, (i + j), j));*/

	/*int i = 5;
	i = MA(i, i + 1) - 7;
	printf("%d\n", i);*/

	//printf("%d\n", f(1));//7

	//printf("%d\n", (func()));//0

	char a[] = "they are students.";
	char b[] = "aeiou";
	int i, j, k;
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (a[i] == b[j])
			{
				for (k = i; a[k] != '\0'; k++)
				{
					a[k] = a[k + 1];
				}
			}
		}
	}
	printf("%s\n", a);

	system("pause");
	return 0;
}