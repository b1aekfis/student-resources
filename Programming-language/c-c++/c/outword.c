#include <stdio.h>

#define OUTWORD 0 // bên ngoài từ
#define INWORD 1 // bên trong từ

int main() {
    int nchar = 0, nline = 0, nword = 0, nsen = 0, character, trangthai = OUTWORD;

    while ((character = getchar()) != EOF) {
        ++nchar; // đếm ký tự
        if (character == '\n')
        ++nline; // đếm dòng
        if (character == '.')
        ++nsen; // đếm câu

		if (character == '\n' || character == ' ' || character == '\t' || character == '|'
	     character == '?' || character == '/' || character == '\\' ||
	     character == '.' || character == ',' || character == '!' ||
	     character == '\'' || character == '"' || character == '-' ||
	     character == '`' || character == '~' || character == '[' ||
	     character == ']' || character == '{' || character == '}' ||
	     character == '<' || character == '>' ||  character == '@' ||
	     character == '%' || character == '^' || character == '&' ||
	     character == '*' || character == '(' || character == ')' ||
	     character == '#' || character == '$' || character == EOF) { // chương trình không xem tất cả ký tự đặt biệt này là một từ (define OUTWORD)
	    trangthai = OUTWORD;
		}
	 	else if (trangthai == OUTWORD) {
		    trangthai = INWORD;
		    ++nword;
	 	}
    }

    printf("Character = %ld", nchar);
    printf("\nLine = %d", nline);
    printf("\nWord = %d", nword);
    printf("\nSentence = %d", nsen);
    return 0;
}