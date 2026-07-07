// calculate the sum of all the elements in the given arry.

// so this is the initalization on the arr 
#include<iostream>
using namespace std;
int main (){
    // int arr [5] = {3,5,6,4,8};
    // cout<<arr[3]<<endl;
    int arr[] = {4,2,5,6,7,8,12,34,56,77,86,45};
    int n = sizeof(arr)/sizeof(arr[0]);//= 48 that which is 12 * 4 = 48
int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
    cout<< sum/n;
    
    return 0;
}