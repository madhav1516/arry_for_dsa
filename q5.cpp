//question find the minimum value out of all the elements in the array.
//ques : find the maximum value out of all the elmeents in the array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,6,7,8,12,34,56,77,86,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (mx<arr[i])
        // {
        //     mx = arr[i]; this is the first method 
        // }
        mx = min(mx,arr[i]);//this is the second method

    }
    cout<<mx;
    
    return 0;

}