#include<stdio.h>

void print_alphabet_x10(void);

int main(void)
{
    print_alphabet_x10();
    return 0;
}

void print_alphabet_x10(void)
{
    int i = 0;
    char letter = 'a';
    
    for(i=0; i<=10; i++)
    {
        letter = 'a';
        while(letter <= 'z')
        {
            putchar(letter);
            letter++;
        }
        putchar('\n');
    }
}