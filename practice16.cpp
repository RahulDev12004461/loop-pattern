//practice16
#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=n-i;
		while(j)
		{
			cout<<" ";
			
			
			j--;
		}
			int k=1;
			while(k<=i)
			{
				cout<<"*";
				
				k++;
			}
			cout<<endl;
			
			i++;
	}
}
