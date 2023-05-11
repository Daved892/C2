#include<iostream>
using namespace std;
int main()
{
	int c=0,l;
	float x,a=0;
	cout<<"ingrese l : ";
	cin>>l;
		do{
			cout<<"ingrese x :";
			cin>>x;
			c=c+1;
		    	a=a+x;
		}while(c<l);
	cout<<"el resultado fue:"<<a<<endl;
	return 0;
}
