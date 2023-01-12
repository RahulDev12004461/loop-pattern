//practice14
#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int i=1;

	while(i<=n)
	{
		int j=1;
			char ch='A'+3*j-i+1;
		while(j<=i)
		{
			
			cout<<ch<<" ";
			
			ch++;
			j++;
		}
		cout<<endl;
	
	i++;
	}
}
