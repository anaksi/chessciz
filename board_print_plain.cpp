#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

string board[9][9] = {  {"8","r","n","b","q","k","b","n","r"},
                                      {"7","p","p","p","p","p","p","p","p"},
                                      {"6"," "," "," "," "," "," "," "," "},
                                      {"5"," "," "," "," "," "," "," "," "},
                                      {"4"," "," "," "," "," "," "," "," "},
                                      {"3"," "," "," "," "," "," "," "," "},
                                      {"2","P","P","P","P","P","P","P","P"},
                                      {"1","R","N","B","Q","K","B","N","R"},
                                      {" ","a","b","c","d","e","f","g","h"} };

void print_board(){



for (int i=0; i<9; i++){
    for (int j=0; j<9;j++)
        cout << board[i][j];
    cout << endl;
}
}
