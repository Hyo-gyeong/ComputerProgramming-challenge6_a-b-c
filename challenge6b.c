//��ǻ���а� 20190975 ��ȿ��
#include <stdio.h>
#define WORD_LEN 100
int main(void)
{
	char str[WORD_LEN];
	int i, temp = 0, result = 0;

	printf("Enter a word: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9'){
			temp += str[i] - '0';
			if (str[i+1] >= '0' && str[i+1] <= '9'){
				temp *= 10;
			}
			else {
				result += temp;
				temp = 0;
			}
		}
	}
	printf("���� ���� ���� ���� %d\n", result);
}