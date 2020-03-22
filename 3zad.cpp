#include <cstdlib>
#include <iostream>
#include <vector> 

using namespace std;

int main() 
{
	int y=1;
	int x=1;
	int o, p;
	
	vector<int> v;
	
	cout<<"Ovo je program koji omogucuje unosenje brojeva sve dok se ne upise nula i ispisuje brojeve koji se ponavljaju."<<endl;
	
	cout<<"Unesi brojeve jedan po jedan, za kraj unesi nulu."<<endl;

	while(y!=0)
	{
	
		cout<<"Unesi "<<x<<". broj: ";
		cin>>y;
		v.push_back(y);
		x++;
	
	}
	cout<<endl;
	
	cout << "Ponavljajuci brojevi su: " <<endl;
	
	for (o=0;  o<v.size(); o++)
	{
		for (p=o+1;  p<v.size(); p++)
		{
			if (v[o]==v[p])
			{
				cout<<v[p]<<" ";
				break;
			}
			
		}
	} 
	
	
	return 0;
}
