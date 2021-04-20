#include "Main.h"

void main() {
	int i;

	printf("1보다 큰 수를 입력하세요.\n");
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &i);

	if (i < 1) 
		printf("Error\n");	
	else printf("%c",even(i));
	
	fgetc(stdin);
}
