#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int count = 0;
    char ch;

    fptr = fopen("filec.txt", "r");
    if (fptr == NULL)
    {
        printf("FILE not open");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fptr);
        if (ch == EOF)
            break;
        count++;
        printf("%c", ch);
    }
    printf("\nNumber of character = %d", count);
    fclose(fptr);
    return 0;
}