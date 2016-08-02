#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void game(int a){

    char typed[2] = {'-','\0'};
    char used[20] = "";
    char word[20];
    char answer[15] = "";
    char hint[90];
    int lifes = 6;
    int score = 0;
    int x;
    int i;
    int q;
    int len;
    int lenHint;

    strcpy(word, randWord(a));

    strcpy(hint, getHint(a));

    printf("after return: %s\n", word);

    len = strlen(word);

    lenHint = strlen(hint);

    for(i = 0; i < len; i++){
        answer[i] = '-';
    }

    for(i = 0; i < lenHint; i++){
        if(hint[i] == '_'){
            hint[i] = ' ';
        }
    }
    
    while(1){
        
        system(CLEAR);
        q = 0;
        //printf("\nPalavra: %s\n", word);
        printf("\n\tUsadas: %s\n\n", used);
        draw(lifes);
        if (lifes == 1) {

            printf("\n\tDica: %s\n", hint);

        }
        printf("\n\n\t%s\n", answer);

        if (score == len) {

            if (lifes == 6) {

                printf("\n\n\t---Flawless Victory!---\n\n");
                break;

            }

            printf("\n\n\tYou Win!\n\n");
            break;

        }


        if(lifes <= 0){

            system(CLEAR);
            draw(0);
            printf("\n\n\tYou lose\n");
            printf("\n\tA palavra era: %s\n\n", word);
            break;

        }

        printf("\n\tDigite uma letra: ");
        scanf(" %c", typed);

        typed[0] = toupper(typed[0]);

        for(i = 0; i < len; i++){
           
            if(word[i] == typed[0]){
                if(answer[i] != typed[0]){
                    answer[i] = typed[0];
                    score++;
                    q = 1;
                }
                q = 1;
            }
        }
        
        if(!strstr(used, typed) && q == 0){

            lifes--;
        }

        if(!strstr(used, typed)){
            strcat(used, " ");
            strcat(used, typed);
        }
    }
}