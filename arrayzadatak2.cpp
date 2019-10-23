#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int v;
	int b;
	
	cout<<"Unesite zeljeni broj polja:"<<endl;
	cin>>b;
	int A[b];
	
	cout<<endl;
	
	cout<<"Unesite zeljene vrijednosti polja:";
	
	for(v=0;v<b;v++) 	
	{
		cin>>A[v];
	}
	
	for(v=b-1;v>0;v--)
	{
		cout<<A[v]<<endl;
	}
	
	
	system("PAUSE");
	return 0;
	
	
}
