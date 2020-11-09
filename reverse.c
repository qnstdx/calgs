#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    for (int i = strlen(str); i >= 0; --i)
        printf("%c", str[i]);
}

int main()
{
    reverse("Test string");
    printf("\n");

    return 0;
}