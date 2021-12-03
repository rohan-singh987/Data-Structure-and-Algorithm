/*

  Basic idea of Selection Sort is -: We find out minimum element and put it on first position then find out second minimum element and put it on second position and so on
    ---> (Theta)ø(n^2) algorithm
    ---> Does less memory writes compared to quick sort, merge sort, Insertion sort, etc (Cycle sort is optimal in terms of memory writes)
    ---> Basic idea for heap sort
    ---> Not Stable

*/

#include<iostream>
using namespace std;


//  [[[[[[      Naive Solution      ]]]]]]
// void selectionSort(int array[], int n)
// {
//     int temp[n];
//     for (int i = 0; i < n-1; i++)
//     {
//         int min_indx = 0;
//         for (int j = 1; j < n-1; j++)
//         {
//             if (array[j] < array[min_indx])
//             {
//                 min_indx = j;
//             }
//         }
//             temp[i] = array[min_indx];
//             min_indx = INT_FAST8_MIN;
//     }
//         for (int i = 0; i < n; i++)
//         {
//             array[i] = temp[i];
//         }
// }



// [[[[[[       Efficient Solution      ]]]]]]
void selectionSort2(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if (array[j] < array[min_idx])
            {
                min_idx = j;
            }
        }
            swap(array[min_idx], array[i]);
    }
     
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {19,13,45,3,33,52,7};
    selectionSort2(arr, 7);
    printArray(arr,7);

    return 0;
}