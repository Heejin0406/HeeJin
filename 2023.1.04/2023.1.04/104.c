#include <stdio.h>
#include <string.h>
/*int main()
{
	//char arr[] = "hello";
	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b', 'c' ,'\0'};
	//printf("%s\n%s\n", arr1, arr2);
	//int len1 = strlen(arr1);
	//int len2 = strlen(arr2);
	//printf("%d\n%d\n", len1,len2);
	//printf("%c\n", 'a');//%s--×Ö·û(µ¥ÒýºÅ'')
	//printf("%c\n", '\'');
	//printf("%s\n", "abc");//%s--×Ö·û´®£¨Ë«ÒýºÅ¡°¡±£©
    //printf("%s\n", "\"");
	//printf("\a\a");
	return 0;
}*/
int main()
{
	int a;
		printf("ÇëÊäÈë£º");
		scanf_s("%d/n", &a);
		while (a < 37)
		{
			printf("a=%dNo\n",a);
			a=a++;
		}
		if (a == 37)
			printf("a=%dYes\n",a);
		else
			printf("a=%dError\na<%d\n",a,a);
	return 0;
}