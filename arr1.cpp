#include<iostream>
using namespace std;
int main(){
    int arr[5];
    // arr[0] = 7;
    // arr[1] = 5;
    // arr[2] = 6;
    // arr[3] = 8;
    // arr[4] = 2;
    // cout<<arr[0]<<endl;//so in here we can say that this is the indexing where the the value out 
    // arr[0] = 90;
    // cout<<arr[0]<<endl;
// now here come to take the for loop
for (int  i = 0; i <=4; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <=4; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}