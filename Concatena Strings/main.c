#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * str_cat(char *s1, char *s2) {
    int i, tam1, tam2;
    char *sres = NULL;

    // sres = s1 + s2
    //        | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11| 12| 13|
    // s1   = | f | a | t | e | c | \0|
    // s2   = | c | a | m | p | i | n | a | s | \0|
    // sres = | f | a | t | e | c | c | a | m | p | i | n | a | s | \0|

    tam1 = strlen(s1);
    tam2 = strlen(s2);

    sres = malloc((tam1+tam2+1)*sizeof(char));

    printf("\nTamanho de s1: %d", tam1);
    printf("\nTamanho de s2: %d", tam2);

    for(i=0; i<tam1; i++)
        sres[i] = s1[i];

    for(i=0; i<tam2; i++)
        sres[i+tam1] = s2[i];

    sres[tam1+tam2] = '\0';

    return sres;
}

int main() {
    char s1[10], s2[10];
    char *sres; //sres agora não tem um ponto fixo.
    int tam_res;

    printf("\nInsira a primeira palavra: ");
    scanf("%s", s1);
    printf("\nInsira a segunda palavra: ");
    scanf("%s", s2);

    sres = str_cat(s1, s2);
    tam_res = strlen(sres);

    printf("\n\nResultado: %s\n", sres);
    printf("\n\nTamanho do resultado: %d\n", tam_res);

    free(sres);

    return 0;
}