#include <stdio.h> 
 
#define MAX_STRING 81 
 
int main() 
{  
	char str[MAX_STRING];  
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;  
	int i = 0; 
 
	printf("���ڿ� �Է� (���ڼ� %d ����): ", MAX_STRING);  
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
 
	printf("a or A: %d ��\n", countA);
	printf("e or E: %d ��\n", countE);
	printf("i or I: %d ��\n", countI);
	printf("o or O: %d ��\n", countO);
	printf("u or U: %d ��\n", countU);
 
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
//	printf("���ڿ� �Է� (���ڼ� %d ����): ", MAX_STRING);  
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
//	printf("a or A: %d ��\n", count[0]);
//	printf("e or E: %d ��\n", count[1]);
//	printf("i or I: %d ��\n", count[2]);
//	printf("o or O: %d ��\n", count[3]);
//	printf("u or U: %d ��\n", count[4]);
//}