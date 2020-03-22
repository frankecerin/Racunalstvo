#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	string rec;
	int b=0;
	getline(cin,rec);
	for(int i=0; i<=rec.length(); i++) {
		if(rec[i]==' '||rec[i]=='.'||rec[i]=='!'||rec[i]=='?') b++;
		
		if(rec[i]!=' ') cout<<rec[i];
		else if (rec[i]==' ') cout<<", ";
		
		}
	cout<<endl<<"Recenica ima "<<b<<" rijeci."<<endl;	
	system("PAUSE");
	return 0;
}
