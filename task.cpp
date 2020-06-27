#include <stdio.h>
#include <iostream>

int main()
{
    char str1[10] ;
    scanf("%s", &str1);
    printf("word1:%s\n",str1);

    char str2[10] ;
    scanf("%s", &str2);
    printf("word2:%s\n",str2);

    printf("sentence:%s %s\n", str1, str2);

    return 0;
}