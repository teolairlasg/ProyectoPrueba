#include <stdio.h>
int main()
{
    int i;
    char ch;

    for(i = 0; i < 256; i++)
    {
        printf("\n%03d %02x %02c",i ,i ,i);
    }
}