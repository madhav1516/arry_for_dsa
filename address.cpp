#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
// 0x16d18ed80
// 0x16d18ed84
// 0x16d18ed88
// 0x16d18ed8c
// 0x16d18ed90

    return 0;
}