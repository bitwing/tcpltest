#include <stdio.h>

/* qsort: v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right){
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right)/* do nothing if array contains */
         return;         /* fewer than two elements */
    swap(v, left, (left + right)/2);/* move partition elem */
    last = left;/* partition */
    for (i = left + 1; i <= right; i++)     /* partition */
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);                 /* restore partition elem */
    qsort(v, left, last-1);
    qsort(v, last+1, right);

}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j){
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;

}

int main(void)
{
    int array[] = {4, 3, 1, 2, 5};
    printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
    qsort(array, 0, 4);
    printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
   return 0;
}
