#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	printf("score1=%d,score2=%d,score3=%d\n", a, b, c);
	return 0;
}*/
int main()
{
	int StdNo=0;
	float ScoreC=0;
	float ScoreMath=0;
	float ScoreEnglish=0;
	scanf("%d;%f,%f,%f",&StdNo,&ScoreC,&ScoreMath,&ScoreEnglish);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", StdNo, ScoreC, ScoreMath, ScoreEnglish);
	return 0;
}