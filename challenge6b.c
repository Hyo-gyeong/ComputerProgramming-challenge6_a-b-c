//컴퓨터학과 20190975 신효경
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
	printf("글자 안의 수의 합은 %d\n", result);
}