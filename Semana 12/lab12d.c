#include<stdio.h>
#include <string.h>

main()
{
    char s1[10],s2[10];
    printf("Insira a primeira palavra:");
    gets(s1);
    printf("Insira a segunda palavra:");
    gets(s2);
    char *mixed=malloc(strlen(s1)+strlen(s2)+1);
    stringconcat(s1,s2,mixed);
    printf("Mistura: %s",mixed);
    return 0;
}

void stringconcat(const char *s1, const char *s2, char *mixed)
{
    printf("Primeira palavra: %s\n", s1);
    printf("Segunda palavra: %s\n", s2);
    while (*s1 != '\0' && *s2 != '\0')
    {
        *mixed++ = *s1++;
        *mixed++ = *s2++;
    }
    while (*s1 != '\0')
        *mixed++ = *s1++;
    while (*s2 != '\0')
        *mixed++ = *s2++;
        *mixed='\0';

}
//SQ5Bhhrg1K
