// PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR
// NOT USING CONDITIONAL OPERATOR

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c", &c);
    (c >= 'a' && c <= 'z') ? (printf("%c is a small case letter", c)) : (printf("%c is not a small case letter", c));

    return 0;
}
