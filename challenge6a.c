//////��ǻ���а� 20190975 ��ȿ��
#include <stdio.h>
int isStringEqual(char s1[], char s2[])
{
	int i, count1 = 0, count2 = 0;

	////���� ���
	//for(i = 0; s1[i] != '\0'; i++)
	//	count1++;
	//for(i = 0; s2[i] != '\0'; i++)
	//	count2++;

	////���� ��
	//if (count1 != count2) //���� �ٸ���
	//	return 0;

	//for (i = 0; i < count1; i++) //���� ������
	//	if (s1[i] != s2[i])
	//		return 0; 
	//return 1; //default

	//���� �� ����
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) // �� ���� �ڵ�!/
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
		printf("�� �ܾ�� �ٸ���.\n");
	else
		printf("�� �ܾ�� ����.\n");
	
}