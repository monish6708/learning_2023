#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        
        for(j=i*2; j<N*2; j++)
        {
            printf(" ");
        }

        
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}