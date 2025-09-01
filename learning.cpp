

#include <iostream>
using namespace std;
int main()
{
   
int n;
cout<<"array size : ";
cin>>n;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cout<<"array size : ";
	cin>>n;
	int arr[n];
	for(int i=0; i<=n; i++) {
		cin>>arr[i];
	}
	int smallest =INT_MAX;
	cout<<"ok" <<smallest;
	for(int j=0; j<=n; j++) {
		if(arr[j]<smallest) {
			smallest =arr[j];
			//cout<<"smallest array element :"<<smallest;
		}
	}
	cout<<"smallest array element :"<<smallest;
	return 0;
}



// smallest and largest in array

#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cout<<"array size : ";
	cin>>n;
	int arr[n];
	for(int i=0; i<=n; i++) {
		cin>>arr[i];
	}
	int smallest =INT_MAX;
	int largest=INT_MIN;
	for(int j=0; j<=n; j++) {
		smallest=min(arr[j],smallest);
		largest=max(arr[j],largest);
	}
	cout<<"smallest array element :"<<smallest;
	cout<<"largest array element :"<<largest;
	return 0;
}