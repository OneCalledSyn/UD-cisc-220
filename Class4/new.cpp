#include <iostream>
using namespace std;

int main()
{
	int *p; //pointer declaration
	int i=0;

	//allocating space for 5 integers
	p = new int[5];

	cout<<"Enter elements :\n";
	for(i=0;i<5;i++)
		cin>>p[i];

	cout<<"Input elements are :\n";
	for(i=0;i<5;i++)
		cout<<p[i]<<endl;
	
	delete p;
	return 0;
}