#include <stdio.h>
#define MAX_STRING 81 
#define BOOL int 
#define TRUE 1 
#define FALSE 0 
 
// Palindrome 검사 BOOL isPalindrome(char str[]); 
 
int main(void) 
{  
	char str[MAX_STRING]; 
 
	printf("* Palindrome 체크\n\n");  
	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);  
	scanf("%s", str); 
 
	if (isPalindrome(str))   // Palindrome 검사   
		printf("\"%s\" is a Palindrome\n\n", str); // “를 출력하려면 \”를 써야  
	else    
		printf("\"%s\" isn't a Palindrome\n\n", str); 
 
	return 0; 
}  
 
BOOL isPalindrome(char s[]) 
{  
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count; i++)
		if (s[i] != s[count-1-i])
			return FALSE;
 
	return TRUE;
 
} 