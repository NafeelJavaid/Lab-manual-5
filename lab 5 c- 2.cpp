#include<iostream>
using namespace std;
int main()
{
	double x,y,z;
	char op,ch;
	do{
		cout << " Enter first value: ";
		cin>>x;
		cout<<" Tell the operator: ";
		cin>>op;
		cout << " Enter second value: ";
		cin>>y;
		switch(op) {
			case '+':
			z=x+y;
			break;
			case '-':
			z=x-y;
			break;
			case '*':
			z=x*y;
			break;
		default:
		cout<< " Plz tell a correct operator";
		break;
		}
		cout<< " Your Result is : "<<z<<endl;
		cout<< " Want to perform again if yes then enter y ? ";
		cin>>ch;
	} while (ch=='y' || ch=='Y' );
		cout<<" Allah Fiz " ;
   	return 0;
}