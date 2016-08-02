#include <stdio.h>

char getHint (int a) {

    FILE *fo;

    fo = fopen("hints.txt", "r");

    char *hint[10];
    int i;

    for(i = 0; i <= 9; i++){

        hint[i] = (char*)malloc(90 * sizeof(char));

        fscanf(fo, "%s", hint[i]);
    }

    fclose(fo);
    
    return hint[a];
}
