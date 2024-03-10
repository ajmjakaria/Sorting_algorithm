#include<bits/stdc++.h>
using namespace std;
void swap_(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int no_of_element)
{
    //Loop for number of passes(outer Loop)
    for(int i = 0; i < no_of_element - 1 ; i++)
    {
        int min_index = i;
        //Inner loop for comparisons
        for(int j = i+1; j < no_of_element; j++)
        {
            if(arr[min_index] > arr[j])
                min_index = j;
        }
        swap_(&arr[min_index], &arr[i]);
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
    selectionSort(arr, sz);
    //print sorted array in ascending order
    for(int i = 0 ; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

