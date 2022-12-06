#include <stdio.h>
#include <string.h>
char dessort(char *str)
{
    char temp;
    int i, j;
    int n = strlen(str);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
}

int main()
{
    char s[100];
    scanf("%s", s);
    dessort(s);

    return 0;
}