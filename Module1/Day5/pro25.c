#include <stdio.h>

int convertStringToInt(const char *str)
{
    int result = 0,i=0;
    
    while (str[i] != '\0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result ;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int number = convertStringToInt(str);

    printf("Converted integer: %d\n", number);

    return 0;
}
