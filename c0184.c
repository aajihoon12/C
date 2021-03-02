#include <string.h>
#include "c0184.h"

main() {
    char * words[] = {"messi","xabi","iniesta","busquets","alves"};
    char alpabets[] = {"abcdefghijklmnopqrstuvwxyz"}; //27
    char * underscore; //¹ØÁÙ
    int words_idx; // ´Ü¾î ¼±ÅÃ idx
    int idx; // (word & ¹ØÁÙ ¹è¿­)ÀÇ ÀüÃ¼ ±æÀÌ°ª
    int chance, boolen; //Âù½º È½¼ö¿Í (°ÅÁş, Âü) º¯¼ö
    char user; // »ç¿ëÀÚ°¡ ¼±ÅÃÇÑ ´Ü¾î¸¦ ´ã´Â »óÀÚ

    printf("***Çà¸Ç °ÔÀÓÀÌ ½ÃÀÛµË´Ï´Ù.*** \n");
    printf("ÀÓÀÇÀÇ ´Ü¾î ¼±ÅÃÁß..... \n"); //½Ã°£ Â÷ Ã³¸®°¡ ¾Æ½±
    words_idx=RandomIndex(); //·£´ıÀÎµ¦½º ²¨³¿. Áï, ´Ü¾î ¼±ÅÃ ¿Ï·á
    idx=strlen(words[words_idx]); //Æ÷ÀÎÅÍº¯¼öÀÇ ÁÖ¼Ò°ª(´Ü¾î¹è¿­À» °¡¸£Å°´Â)
    MakeUnderscore(underscore, idx); //¼±ÅÃµÈ ´Ü¾îÀÇ ±æÀÌ¿Í µ¿ÀÏÇÏ°Ô '_'¹è¿­ »ı¼º

    chance=5;
    while(1) {
        if(chance <= 0)
            break;

        PrintAandU(alpabets, underscore, idx); //¾ËÆÄºª°ú '_'´Ü¾î Ãâ·Â
        printf("-rest chance: %d \n", chance);
        printf("´Ü¾î ¼±ÅÃ: "); scanf("%c", &user);

        boolen=CompareUserInput(underscore, words[words_idx], idx, user); //ÀÔ·ÂµÈ ´Ü¾î¿Í Á¤´ä ´Ü¾î¹è¿­ ºñ±³
        if(boolen) { // ÇÏ³ª ¸Â­Ÿ´Ù¸é
            printf("***Strike!!*** \n");
            ChangeAlpabet(alpabets, user);
        }else { //¸ø¸ÂÃß¸é
            printf("***ball.. Chance Minus!!*** \n");
            chance--; //Âù½º °¨¼Ò
        }


        boolen=0;
        boolen=CompareUnderWord(underscore, words[words_idx], idx); //¸ğµÎ ¸ÂÃß¸é
        if(boolen) { //°ÔÀÓ ³¡. ½Â¸®
            printf("***%d All Strike!! Greate!! *** \n", idx);
            break; 
        }
    }
    
    printf("GAME OVER \n");
    free(underscore);
    return 0;
}