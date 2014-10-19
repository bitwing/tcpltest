/*
 * =====================================================================================
 *
 *       Filename:  charp.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月07日 13时01分05秒
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

#define MAXLINES 5000   /* max lines to be sorted */
char *lineptr[MAXLINES];    /* pointers to next line */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/* sort input line */
int main(void) {
    int nlines;     /* number of input lines read */

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n"); 
        return 1;
    }
}

#define MAXLEN 1000 /* max length of any input line */
int getLine(char *, int);
char *alloc(int);

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getLine(line, MAXLEN)) > 0) 
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else {
            line[len-1] = '\0';/* delete newline */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines) {
    while (nlines-- > 0)
        printf("%s\n", lineptr++);
}
