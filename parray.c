/*
 * =====================================================================================
 *
 *       Filename:  parray.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月04日 02时14分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  mark finch (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

#define MAXLINES    5000    /* maxlines to be sorted */

char *lineptr[MAXLINES];    /* pointers to text lines */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/* sort input lines */
main(){
    int lines;  /* number of input lines read */

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}
