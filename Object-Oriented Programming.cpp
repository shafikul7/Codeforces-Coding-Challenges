// creating class
#include <iostream>
#include <string>
using namespace std;
class MyClass {
public:
	string myName;
};

int main() {
	MyClass myObj;

	myObj.myName="Shafikul islam";

	cout<<myObj.myName;


	return 0;
}
//  array of object


#include <iostream>
#include <string>
using namespace std;
class MyClass {
public:
	void print(int i) {
		cout<< i <<" : "<< "shafikul islam"<<endl;
	}
};

int main() {
	MyClass myObj [20];
	cout<<'typedef(myObj)'';
	for(int i=1; i<=20; i++) {
		myObj[i].print(i);
	}



	return 0;
}





