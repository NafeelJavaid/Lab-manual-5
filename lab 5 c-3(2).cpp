#include<iostream>
using namespace std;
int main ()
{
	int x=0;
	int y=1;
	while(y<=100)  {
		x=x+(y*y) ;
		y++;
	} 
	cout<< "Sum of squares : "<<x;
	return 0;
}