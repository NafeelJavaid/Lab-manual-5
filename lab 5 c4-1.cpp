#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int power=0;
	int z;
	while(power<=20) {
		z=pow(2,power);
		cout<<z<<endl;
		power++;
		}
		return 0;
}