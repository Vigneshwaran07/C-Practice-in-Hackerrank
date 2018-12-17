#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i = 0, len = 0;
    char s[1024];
    scanf("%[^\n]", s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}

