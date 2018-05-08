#include <stdio.h> 
#include <stdlib.h> 

#include "board_print_plain.h"
#include "board.h"




int main(int argc, char *argv[]){
  InitBoard();
  //print_board();
char xod[16];
while(1){
//while (GetLine(xod,sizeof(xod))){}
scanf("%s",xod);
printf("%s",xod);
moves(xod);
print_board();
}


return 0;
}

