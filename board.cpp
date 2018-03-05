#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <conio.h>

void Swap(char *x, char *y){
    char temp = *x;
    *x=*y;
    *y=temp;
}

void moves(){
char xod[100];
gets(xod);
int x,y,x1,y2;
int i=0;
while(xod[i]!='\0'){
x = xod[i] - 'a' + 1;
y = 8 - xod[i+1];
x1 = xod[i+3] - 'a' + 1;
y1 = 8 - xod[i+4];
Swap(board[y][x],board[y1][x1]);
board[y][x]=' ';
if (xod[i+5]!=' ') break; else i+=6;
}
}
