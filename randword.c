#include <string.h>
#include <stdio.h>

char *randWord (int a) {

    FILE *fp;

    fp = fopen("words.txt", "r");

    char *temp[10];
    int i;

    for(i = 0; i <= 9; i++){

        temp[i] = (char*)malloc(15 * sizeof(char));

        fscanf(fp, "%s", temp[i]);
    }

    fclose(fp);

    return temp[a];
}
