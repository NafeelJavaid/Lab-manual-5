#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int z=0;
	cout << " Enter the first value: ";
	cin>>a;
	cout<<" Enter second value: ";
	cin>>b;
	while(a<=b) {
	if(a%2!=0){
		z=z+a;
		a++;
	} else{
		a++;
	}
} cout << " Your answer : "<<z;
 return 0;
}
