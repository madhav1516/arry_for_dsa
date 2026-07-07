//Q find the elemnt x in the arrary. take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int x;
    
    int arr[] = {4,2,5,6,7,8,12,34,56,77,86,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter target : ";
    cin>>x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            flag = true;// false means absent
            // cout<<x<<"is persent "<<endl;
            break;
        }
        
    }
    if (flag =true) cout<<x<<"is present";
    else cout<<x<<" is not present ";
    
    
    return 0;
}