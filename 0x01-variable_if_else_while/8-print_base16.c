#include<stdio.h>

int main(void)
{
    char num = '0',letter = 'a';

    while(num <= '9')
    {
        putchar(num);
        num++;
    }

    while(letter <= 'f')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
    return 0;
}