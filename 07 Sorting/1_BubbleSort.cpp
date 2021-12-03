/*
    Bubble Sort -: It always compare with adjacent elements (i.e - array[i] , array[i+1])
                ----> if (array[i] <= array[i+1]) then it doesnot do anything
                ----> if (array[i] > array[i+1]) then it swap i with i+1 (adjacent elements)
*/

#include<iostream>
using namespace std;


//  [[[[[[      Naive Solution      ]]]]]]
void bubbleSort(int array[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
      for (int j = 0; j < n-i-1; j++)  //Here we can optimize it much more by comparing it till (n-i-1)
      {
          if (array[j] > array[j+1])
          {
              swap(array[j], array[j+1]);
          }
      }
    }
}


// [[[[[[       Efficient Solution      ]]]]]]
void bubbleSort2 (int array[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
        if (swapped == false)
        {
            break;
        }
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
    
//  [[[[[[      Naive Solution      ]]]]]]
    bubbleSort(arr,7);
    printArray(arr,7);
    
// [[[[[[       Efficient Solution      ]]]]]] 
    bubbleSort2(arr,7);
    printArray(arr,7);


    return 0;
}