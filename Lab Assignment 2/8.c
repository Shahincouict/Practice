#include <stdio.h>
char broken_keyboard(char s[])
{
    for (int i = 0; i < 4; i++)
    {  if(i==1 || i==3){
        printf("%c%c",s[i],s[i]);
    }
    else
        printf("%c", s[i]);
        
    }
}
int main()
{
    int s[100];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &s[i]);
    }

    broken_keyboard(s);
    return 0;
}