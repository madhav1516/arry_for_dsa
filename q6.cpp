//find the second largest elemnts in the given array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,6,7,8,12,34,56,77,86,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;
    int smx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mx<arr[i])
        {
            mx = arr[i]; //this is the first method 
        }
        // mx = max(mx,arr[i]);//this is the second method

    }
    for (int i = 0; i < n; i++)
    {
       if (smx<arr[i] && arr[i]!=mx )
       {
        smx = arr[i];
       }
       
    }
    

    cout<<mx;
    cout<<endl;
    cout<<smx;
    
    return 0;

}


// largest mx if(mx<arr[i])mx =arr[i];
// then traverse the array again and now check 
// int smx
// if (smx<arr[i] && arr[i] != mx)
// {
   
// }
