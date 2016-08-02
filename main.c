#include <stdio.h>
#include <string.h>
#include <time.h>
#include <signal.h>

void draw(int a);
char *randWord(int a);
void game(int a);
char getHint(int a);
void sigproc();
void quitproc();

int main(){

    int nRand = 0;
    char choice[1];

    signal(SIGINT, sigproc);
    signal(SIGQUIT, quitproc);

    while(1){
        
        srand(time(NULL));

        nRand = rand() % 10;

        game(nRand);
    

        printf("\n\tDeseja jogar novamente?[S/N] ");
        scanf(" %c", choice);
        choice[0] = toupper(choice[0]);
        if(choice[0] != 'S')
            break;

    }
    return 0;
}

void sigproc(){

    signal(SIGINT, sigproc);
    printf("\n\tJá vai sair? [Aperte Ctrl-\\ para sair]\n");

}

void quitproc(){

    printf("\n\tByye!\n");
    exit(0);
}