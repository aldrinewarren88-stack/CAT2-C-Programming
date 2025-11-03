/*
 *NAME :ALDRINE WARREN
 *REG NO:PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO CREATE A 2D ARRAY WITH 2 COLUMNS NMAED SCORES
 */
/*What is an array?
 * fundamental data structure characterised by collection of elements, homogenous datatype,contiguous memory allocation and indexed access dataon it
 */
#include <stdio.h>//scanf(),printf()
//main function
int main() {

    //initialising and declaring the 2D array

    int scores[2][2]={
        {65,92},
        {84,72}
    };

// using a for loop(start,stop,step)

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\n", scores[i][j]);
        }
        printf("  \n");
    }

    return 0;
}