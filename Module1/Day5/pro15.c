#include <stdio.h>
#include <ctype.h>

void toggleStringCase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    toggleStringCase(str);

    printf("Toggled string: %s\n", str);

    return 0;
}
