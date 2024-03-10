#include<bits/stdc++.h>
using namespace std;
void swap_(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[], int no_of_element)
{
    //Loop for number of passes(outer Loop)
    for(int i = 0; i < no_of_element - 1 ; i++)
    {
        //Inner loop for comparisons
        for(int j = 0; j < no_of_element - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
                swap_(&arr[j], &arr[j+1]);
        }
    }
}
int main()
{
    int arr[] = {1,5,7,2};
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    cout << endl;
    bubbleSort(arr, sz);
    //print sorted array in ascending order
    for(int i = 0 ; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
