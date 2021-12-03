 #include<iostream>
 using namespace std;


int largest(int array[], int n)
{
    int lar = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[lar])
        {
            lar = i;
        }
    }
    return lar;
}



int secondLargest(int array[], int n)
{
    int largeNO = largest(array, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[largeNO])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (array[i] > array[res])
            {
                res = i;
            }
            
        }
        
    }
    return res;
}


 int main(){
     
     
     int arr[] = {5,8,10,2,23,1,4,53,5};
    cout<<largest(arr,9)<<endl;
    cout<<secondLargest(arr, 9)<<endl;


    int ar[] = {10,10,10};
    cout<<largest(ar, 3 )<<endl;
    cout<<secondLargest(ar,3)<<endl;
     


     return 0;
 }