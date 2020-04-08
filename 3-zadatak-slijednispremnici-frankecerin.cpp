#include <cstdlib>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() 

{
	vector<int> RT;
	
	float x;
	int p=0;
	
	cout<<"Ovo je program koji ispisuje brojeve se ne unese nula i koji ispisuje kapacitet."<<endl;
	cout<<"Unesite neki broj:"<<endl;

	cin>>x;
	
	cout<<endl;
	
	while ((x!=0))
	{
		if (x!=int(x))
		{
			cout<<"Unesite ponovno cijeli broj."<<endl;
			cin>>x;
		}
		else
		{
			cout<<"Unesite ponovno dok nebude nula."<<endl;
			RT.push_back(x);
			cin>>x;
		}
 	}
 	RT.push_back(x);
 	cout<<endl;
	
	cout<<"Vasi brojevi su:"<<endl;
	cout<<endl;
	for (vector<int>::iterator it=RT.begin(); it!=RT.end(); it++)
	{
		cout<<*it<<" ";
		if (RT.size())
		{
			p++;
		}
		
	}
	
	cout<<"U ovom vektoru ima: "<<p<<" broj/a/eva."<<endl;
	cout<<endl;
	
	cout<<"Kapacitet ovih brojeva je: "<<RT.capacity()<<" ."<<endl;
	cout<<endl;
	
	cout<<"Nakon sortiranja, brojevi izgledaju ovako:"<<endl;
	sort (RT.begin(), RT.end());
	
	for (vector<int>::iterator it=RT.begin(); it!=RT.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	cout<<"Najmanji broj u vektoru je: "<<*min_element(RT.begin(), RT.end())<<" ."<<endl;
	cout<<"Najveci broj u vektoru je: "<<*max_element(RT.begin(), RT.end())<<" ."<<endl;
	
	vector<int>::iterator ip;
	
	ip=unique(RT.begin(), RT.end());
	
	RT.resize(distance(RT.begin(), ip));
	
	cout<<"Brojevi bez ponavljanja su:"<<endl;
	
	for (ip=RT.begin(); ip!=RT.end(); ip++)
	{
		cout<<*ip<<" ";
	}

	return 0;
}
