#include <stdio.h>
#include <stdlib.h>

void printLists(int* numList, int size)
{
    for(int i =0; i<size;i++)
    {
        printf("%d\t",numList[i]);
    }
    printf("\n");
}

void bubbleSort(int* list, int size)
{
       for(int i=0;i<size;i++)
       {
            for(int j = 0;j<size;j++)
            {
                if(list[j] >= list[j+1])
                {
                    int t;
                    t = list[j];
                    list[j]=list[j+1];
                    list[j+1]=t;
                }
            }
        }
   printLists(list,size);
}

void insertionSort(int* list, int size)
{
    int i, key, j;
    // Loop from the second element of the array
    for (i = 1; i < size; i++)
    {
        key = list[i];
        // The element to be inserted
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key,
           to one position ahead of their current position */
        while (j >= 0 && list[j] > key)
        {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = key;
        // Insert the key at the correct position
    }
     printLists(list,size);
}

int main()
{
   int list[6] = {4,98,1,555,76,3};
   int arraySize = (sizeof(list)/4);
   printf("Array's size= %d elements.\nSorted List(via bubble sort):\n",arraySize);
   bubbleSort(list,arraySize);
   printf("Sorted array (via insertion sort):\n");
   insertionSort(list,arraySize);
}
