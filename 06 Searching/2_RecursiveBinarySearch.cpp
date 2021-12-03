#include<iostream>
using namespace std;

int bSearch(int array[], int low, int high, int x){
    if (low >= high)
        return -1;
    
        int mid = (low+high)/2;

        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] > x)
        {
            return bSearch(array, low, (mid-1) , x);
        }
        else{
            return bSearch(array , low, (mid+1) , x);
        }
}
      

int main(){

    int array[] = {10,20,30,40,50};

    cout<<bSearch(array,0,5, 40);


    return 0;
}