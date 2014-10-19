/*
 *
 * =====================================================================================
 *
 *       Filename:  shellsort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月01日 00时15分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  mark finch (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

int main(void){
   int a[] = {3, 2, 5, 4, 1} ;
   printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
   shellsort(a, 5);
   printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
   return 0;
}
