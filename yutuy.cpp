#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"enter any two numbers";
	cin>>i>>j;
	while(i<=-100)
	{
	if(i<=j)
	{
		cout<<j<<"is greater than"<<i;
	}
	else
	{
		cout<<i<<"is less than"<<j;
	}
}
	return 0;
}
