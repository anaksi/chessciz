#define CTEST_MAIN


#include <board.h>
#include <board_print_plain.h>

#include <ctest.h>



CTEST(PawnMove, Correct) {
InitBoard();
    int result = moves("d2-d3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(PawnMove, Incorrect) {
InitBoard();
    int result = moves("b2-b7");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(KnightMove, Correct) {
InitBoard();
    int result = moves("b1-a3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(KnightMove, Incorrect) {
InitBoard();
    int result = moves("g1-h5");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(BishopMove, Correct) {
InitBoard();
    int result = moves("c1-e3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(BishopMove, Incorrect) {
InitBoard();
    int result = moves("c1-c3");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(QueenMove, Correct) {
InitBoard();
    int result = moves("d1-d3");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(QueenMove, Incorrect) {
InitBoard();
    int result = moves("d1-e3");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}



int main(int argc, const char** argv) {
    
   return ctest_main(argc, argv);
   
}
