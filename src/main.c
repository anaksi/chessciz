#include <stdio.h> 
#include <stdlib.h> 

#include "board_print_plain.h"
#include "board.h"




int main(int argc, char *argv[]){
  InitBoard();
  //print_board();

while(1){
moves();
print_board();
}


return 0;
}

