#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void Merge(int array[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int *L = calloc(n1, sizeof(int));//Left Side
    int *R = calloc(n2, sizeof(int));//Right Side

   //Copy data from array[] to L[] and R[]
   for (i = 0; i < n1; i++) L[i] = array[left + i];
   for (j = 0; j < n2; j++) R[j] = array[mid + 1 + j];

     i = j = 0;
     k = left;
    //Sorts the array
   while(i < n1 && j < n2){
       if(L[i] <= R[j]) array[k++] = L[i++];
       else array[k++] = R[j++];
   }
   //Checks whether L or R have any number left to merge
       while (i < n1) array[k++] = L[i++];
       while (j < n2) array[k++] = R[j++];

    free(R);
    free(L);
}

void MergeSort(int array[], int left, int right)
{
    if(left < right){
        int mid = (left + right) / 2;
        MergeSort(array, left, mid);
        MergeSort(array, mid + 1, right);
        Merge(array, left, mid, right);
    }
}

int main(void)
{
    int array[SIZE] = {1, 2, 0};
    int left = 0;
    int right = SIZE - 1;

    MergeSort(array, left, right);
    return 0;
}
