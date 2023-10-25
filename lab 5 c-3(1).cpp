#include<iostream>
using namespace std;
int main()
{
	int x=0;
	int y=2;
	while(y<=100) {
		if(y%2==0){
		x=y+x;
		y++ ;
		 }
		else{
			y++;
		}
			}
			cout<<" Sum of even numbers is :"<<x;
	return 0; 
}