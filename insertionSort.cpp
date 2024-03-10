#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int size)
{
    //Outer loop for key
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int index = i - 1;
        //inner loop for checking all the element in left partition
        //Compare key with each element in left portion until get smaller element
        while(key < arr[index] && index >= 0){
            arr[index+1] = arr[index];
            index -= 1;
        }
        arr[index+1] = key;
    }
}

int main()
{
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int sz = sizeof(arr)/sizeof(arr[0]); //total size / size of an element
    insertionSort(arr, sz);
    //Print array after sorting
    for(int i = 0; i < sz; i++)
        cout << arr[i] << " ";

    return 0;
}
