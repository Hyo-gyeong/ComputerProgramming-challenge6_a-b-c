//////컴퓨터학과 20190975 신효경
#include <stdio.h>
int isStringEqual(char s1[], char s2[])
{
	int i, count1 = 0, count2 = 0;

	////길이 계산
	//for(i = 0; s1[i] != '\0'; i++)
	//	count1++;
	//for(i = 0; s2[i] != '\0'; i++)
	//	count2++;

	////길이 비교
	//if (count1 != count2) //길이 다를때
	//	return 0;

	//for (i = 0; i < count1; i++) //길이 같을때
	//	if (s1[i] != s2[i])
	//		return 0; 
	//return 1; //default

	//길이 비교 없이
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) // 더 좋은 코드!/
		if (s1[i] != s2[i])
			return 0;

	return 1;
}
int main(void)
{
	char f_word[80], s_word[80];

	printf("Enter the first word:");
	scanf("%s", f_word);
	printf("Enter the second word:");
	scanf("%s", s_word);

	if (isStringEqual(f_word, s_word) == 0)
		printf("두 단어는 다르다.\n");
	else
		printf("두 단어는 같다.\n");
	
}