#include<iostream>
using namespace std;


// Naive Solution

int largest_naiveSol(int array[], int n){
    for (int i = 0; i < n; i++)
    {
    bool lar = true;
    for (int j = 0; j < n; j++)
    {
        if (array[j] > array[i])
        {
            lar = false;
            break;
        }  
    }

    if (lar == true)
    {
        return i;
    }
   }
    return -1;
}




int largest(int arr[], int n)
{
    int lar = 0;
     for (int i = 0; i < n; i++)
     {
         if (arr[i] > arr[lar])
         {
             lar = i;
         }  
     }
    return lar;
}





int main(){

    int arr[] = {5,8,10,12,4,31};
    cout<<largest_naiveSol(arr,6)<<endl;
    cout<<largest(arr,6)<<endl;

    return 0;


}