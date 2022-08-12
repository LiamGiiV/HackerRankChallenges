#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

challenge2(){
    char character;
    char string[100];
    char sentence[100];
    int result = scanf("%c\n", &character);
    result = scanf("%[^\n]%*c", string);
    result = scanf("%[^\n]%*c", sentence);
    printf("%c\n%s\n%s", character, string, sentence);
}