/*
Binary Search uses the benenfit of the sorted array
     it first finds out middle element of sorted array then compares whether mid element is bigger then x or not
      here we have three cases   computed mid =  (low + high)/2
                            ----> I (array[mid] ==  x)
                            ----> I (array[mid] < x)
                            ----> I (array[mid] > x)
*/
#include<iostream>
using namespace std;


int binarySearch(int array[], int n, int x)
{
     int low = 0, high = n-1;
     
     while (low <= high)
     {
         int mid = (low+high)/2;

         if (array[mid] == x)
         {
             return mid;
         }
         else if (array[mid] > x)
         {
             high = mid-1;
         }
         else{
             low = mid +1;
         }
     }
     return -1;
}


int main(){
    
    int array[] = {10,20,30,40,50};

    cout<<binarySearch(array,5, 40);



    return 0;
}