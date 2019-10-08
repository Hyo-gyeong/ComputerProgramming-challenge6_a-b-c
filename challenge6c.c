#include <stdio.h> 
 
#define MAX_STRING 81 
 
int main() 
{  
	char str[MAX_STRING];  
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;  
	int i = 0; 
 
	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);  
	scanf("%s", str);
	
	while (str[i] != '\0') {
		if (str[i] == 'a' || str[i] == 'A')
			countA++;
		else if (str[i] == 'e' || str[i] == 'E')
			countE++;
		else if (str[i] == 'i' || str[i] == 'I')
			countI++;
		else if (str[i] == 'o' || str[i] == 'O')
			countO++;
		else if (str[i] == 'u' || str[i] == 'U')
			countU++;
		i++;
	}
 
	printf("a or A: %d 개\n", countA);
	printf("e or E: %d 개\n", countE);
	printf("i or I: %d 개\n", countI);
	printf("o or O: %d 개\n", countO);
	printf("u or U: %d 개\n", countU);
 
}

//#include <stdio.h>
//
//#define MAX_STRING 81
//
//int main(void)
//{
//	char str[MAX_STRING];
//	int count[5] = {0};
//	int i = 0;
//
//	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);  
//	scanf("%s", str);
//
//	while (str[i] != '\0') {
//		if (str[i] == 'a' || str[i] == 'A')
//			count[0]++;
//		else if (str[i] == 'e' || str[i] == 'E')
//			count[1]++;
//		else if (str[i] == 'i' || str[i] == 'I')
//			count[2]++;
//		else if (str[i] == 'o' || str[i] == 'O')
//			count[3]++;
//		else if (str[i] == 'u' || str[i] == 'U')
//			count[4]++;
//		i++;
//	}
//
//	printf("a or A: %d 개\n", count[0]);
//	printf("e or E: %d 개\n", count[1]);
//	printf("i or I: %d 개\n", count[2]);
//	printf("o or O: %d 개\n", count[3]);
//	printf("u or U: %d 개\n", count[4]);
//}