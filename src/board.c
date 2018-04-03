#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "board_print_plain.h"
#include "board.h"



/*void Swap(char *x, char *y){
    char temp = *x;
    *x=*y;
    *y=temp;
    }*/



static int GetLine(char *buff, size_t sz) {
    int ch, extra;
    if (fgets (buff, sz, stdin) == NULL) {
        return 1;
    }
    if (buff[strlen(buff)-1] != '\n') {
        extra = 0;
        while (((ch = getchar()) != '\n') && (ch != EOF))
            extra = 1;
        return (extra == 1) ? 1 : 0;
    }
    buff[strlen(buff)-1] = '\0';
    return 0;
}



void moves(){
  print_board();
char xod[16];
//xod = malloc(100*sizeof(char));
while (GetLine(xod,sizeof(xod))){}
 printf("%s",xod);
/*int x,x1,y,y1;
int i=0;

x = xod[i] - 'a' + 1;
y = 8 - xod[i+1];
x1 = xod[i+3] - 'a' + 1;
y1 = 8 - xod[i+4];
board[x1][y1]=board[x][y];
//Swap(&board[y][x],&board[y1][x1]);
board[y][x]=' ';*/
 int l1=xod[0]-'a';
 int d1=xod[1]-'0'-1;
 int l2=xod[3]-'a';
 int d2=xod[4]-'0'-1;
 board[l2][d2]=board[l1][d1];
 board[l1][d1]=' ';
 printf("\n");

}
