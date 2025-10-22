#include <stdio.h>
#include <stdbool.h>

static int SwapCompare;

void BubbleSort(int Array[], int ArraySize)
{
    bool Swap = true;
    int SwapCount = 0;
    int t;

    while(Swap){
        for(int i = 0; i < ArraySize - 1; i++){
            if(Array[i] > Array[i + 1]){
                t = Array[i];
                Array[i] = Array[i + 1];
                Array[i + 1] = t;
                SwapCount++;
            }
        }
        if(SwapCompare == SwapCount) Swap = false;
        SwapCompare = SwapCount;
    }

}


int main(void)
{
    SwapCompare = 0;
    int Array[] = {5, 6, 3, 4, 2, 1};
    int ArraySize = sizeof(Array) / sizeof(Array[0]);
    BubbleSort(Array, ArraySize);
    return 0;
}
