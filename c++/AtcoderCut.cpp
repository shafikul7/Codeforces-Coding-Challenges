#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>> n >> k;
    int arr[n];
    
    for(int i=0;i<n ;i++){
        cin>> arr[ i];
    }
    
    int ind=n-k;
    for(int i=ind; i<n;i++){
        cout<<arr[i];
    }
    
    for(int i=0; i<ind;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}