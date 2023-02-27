#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char n;
//	while (scanf("%c", &n) != EOF)
//	{
//		if (n == '\n')
//		{
//			continue;
//		}
//		else if (n == 'a' || n == 'A')
//		{
//			printf("Vowel\n");
//		}
//		else if (n == 'e'||n == 'E')
//		{
//			printf("Vowel\n");
//		}
//		else if (n == 'i'||n == 'I')
//		{
//			printf("Vowel\n");
//		}
//		else if (n == 'o'||n == 'O')
//		{
//			printf("Vowel\n");
//		}
//		else if (n == 'u'||n == 'U')
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}
int main()
{
	char n = 0;
	while (scanf("%c", &n) != EOF)
	{
		if (n == '\n')
		{
			continue;
		}
		else if ((65 <= n &&n<= 90) || (97 <= n&&n <= 122))
		{
			printf("%c is an alphabet.\n", n);
		}
		else
		{
			printf("%c is not an alphabet.\n", n);
		}
	}
	return 0;
}