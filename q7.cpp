//cout the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,6,7,8,12,34,56,77,86,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the targe ; ";
    cin>>x;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>x)count++;
    }
    
    
 cout << "Number of elements greater than " << x << " is: " << count << endl;
    
    
    return 0;

}