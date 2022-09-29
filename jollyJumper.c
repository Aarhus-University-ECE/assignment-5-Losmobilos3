#include "jollyjumper.h"
#include <stdbool.h>
//#include <malloc.h>
#include <stdlib.h>


int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/
    int diffs_found[size-1];  // Length will be 1 less that seq[], since there will be one less jump than numbers.

    for (int i = 0; i < size; i++)  // Initialize all values of diffs_found = 0
    {
        diffs_found[i] = 0;
    }

    int gap;
    for (int i = 1; i < size; i++) // assign 1 to the indexes of diffs_found[] which have been jumped
    {
            gap = seq[i] - seq[i-1];
            if (gap < 0)                // if the jump is negative, take the numerical value
                gap *= -1;              //
            if (gap < size)               // if the gap should be on the list or not, if not, break.
                diffs_found[gap-1] = 1;   //
            else                          //
                break;                    //
    }

    for (int i = 0; i < size-1; i++) // returns 0 if any of the jolly jump values are missing
    {
        if (diffs_found[i] == 0)
            return 0;
    }

    return 1;
}

