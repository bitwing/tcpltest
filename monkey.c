/*
 * =====================================================================================
 *
 *       Filename:  monkey.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年07月06日 14时08分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  mark finch (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int eatpeach(int day);
int main(void) {
    printf("第一天摘下的桃子: %d", eatpeach(1));
    return 0;
}

int eatpeach(int day) {
    return day == 10 ? 1 : (eatpeach(++day) + 1) * 2;
}

/*
f(1) = n/2-1; f(2) = f(1)/2-1; f(3) = f(2)/2-1; ~~~ f(9) = f(8)/2-1 = 1;
f(1) = (f(2)+1)*2 f(8) = (f(9)+1)*2;
*/
