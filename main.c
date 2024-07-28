#include <stdio.h>
#include <stdlib.h>

void printList(int *numberList,int size)
{
     for(int i=0;i<size;i++)
    {
        printf("Item #%d : %d\n",(i+1),numberList[i]);
    }
     printf("\n");
}

void addToList(int* numberList,int position, int number,int size)
{
    //Allows array to be bigger by 1.
    size=(size+1);
    //Works backwards until position desired is found.
    for (int i = (size - 1); i >= position; i--)
    {
        numberList[i] = numberList[i - 1];
    }

    //New number is assigned.
    numberList[position - 1] = number;

    // This prints updated array.
   printList(numberList,size);

}

void removeFromList(int* numberList,int position,int size)
{
    for (int i = (position-1); i <=(size - 1); i++)
    {
            numberList[i] = numberList[i + 1];
    }
    printf("New list post deletion: \n");
    // This prints updated array.
    printList(numberList,size);
}

int listsBiggestItem(int* numberList,int size)
{
    int max= numberList[size-1];
    for(int i=0;i<size;i++)
    {
        if(numberList[i]>max)
        {
            return numberList[i];
        }
        else
        {
                return max;
        }
    }
}

int listsSmallestItem(int* numberList,int size)
{
    int min= numberList[0];
    for(int i=1;i<size;i++)
    {
        if(numberList[i]<min)
        {
            return numberList[i];
        }
        else
        {
            return min;
        }
    }
}

void listsSumAndAverage(int* numberList,int size)
{
    double average;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=numberList[i];
    }
    average=((double)sum/size);
    printf("Sum of items in current list is %d and their average is %.2lf.\n",sum,average);
}

/*
int main()
{
    int numberList[5] = {1,2,3,4};
    int position,newNumber;
    //First prints original list of numbers.
    printList(numberList,(sizeof(numberList)/5));
    printf("\n");
    printf("Number of elements currently: %d\n",(sizeof(numberList)/5));
    printf("Where do you want to add a new item?\n");
    scanf("%d",&position);
    printf("What number do you wanna add?\n");
    scanf("%d",&newNumber);
    printf("New list below: \n");
    addToList(numberList,position,newNumber,(sizeof(numberList)/5));
    //printList(numberList);
    printf("Now to deletion: ");
    printf("Type item number of item you wanna delete.\n");
    scanf("%d",&position);
    removeFromList(numberList,position,(sizeof(numberList)/5));
    printf("In this list the biggest number is %d.\n", listsBiggestItem(numberList,(sizeof(numberList)/5)));
    printf("On the other hand, the smallest number is %d.\n",listsSmallestItem(numberList,(sizeof(numberList)/5)));
    printf("Number of elements currently: %d\n",(sizeof(numberList)/5));
    listsSumAndAverage(numberList,(sizeof(numberList)/5));
    printf("Thank you for your time and goodbye!");
}
*/
