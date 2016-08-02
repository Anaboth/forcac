#include <stdio.h>

void draw(int a){
    
    if(a == 0)
        printf("        ---------\n        |       O\n        |      /|\\\n        |       |\n        |      / \\\n        |        \n        |      \n");
    
    if(a == 6)
        printf("        ---------\n        |       \n        |      \n        |      \n        |      \n        |\n        |\n"); 
    
    if(a == 5)
        printf("        ---------\n        |       O\n        |      \n        |      \n        |      \n        |\n        |\n"); 
    
    if(a == 4)
        printf("        ---------\n        |       O\n        |       |\n        |       |\n        | \n        |\n        |\n");
    
    if(a == 3)
        printf("        ---------\n        |       O\n        |       |\\\n        |       |\n        |      \n        |\n        |\n");
    
    if(a == 2)
        printf("        ---------\n        |       O\n        |      /|\\\n        |       |\n        |      \n        |\n        |\n"); 
    
    if(a == 1)
        printf("        ---------\n        |       O\n        |      /|\\\n        |       | \n        |        \\\n        |\n        |\n");

}