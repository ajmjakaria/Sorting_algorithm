#include<bits/stdc++.h>
using namespace std;

void swap_(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
//function for partition
int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    //point to greater element
    int i = (left - 1);
    //traverse all the element of the array & compare with pivot
    for(int j = left; j < right; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap_(&arr[i], &arr[j]);
        }
    }
    //swap pivot element with the greater one at i
    swap_(&arr[i + 1], &arr[right]);
    return i+1;
}
void quickSort(int arr[], int left, int right)
{
    if(left < right)
    {
        //receive partition point
        int partition_idx = partition(arr, left, right);
        //recursive call on the left partition of the pivot
        quickSort(arr, left, partition_idx-1);
        //recursive call on the right partition of the pivot
        quickSort(arr, partition_idx+1, right);
    }
}

int main()
{
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int sz = sizeof(arr)/sizeof(arr[0]); //total size / size of an element
    quickSort(arr, 0, sz-1);
    //Print array after sorting
    for(int i = 0; i < sz; i++)
        cout << arr[i] << " ";

    return 0;
}

