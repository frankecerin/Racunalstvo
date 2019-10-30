#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
int i, brojo;
brojo=0;
char X[]="Koliko slova o ima u ovoj recenici?";
for(i=0;X[i]!='\0';i++)
{
	if(X[i]=='o')
	{
		brojo=brojo+1;
	}
}
cout<<"U znakovnom nizu:"<<endl;
cout<<"Koliko slova o ima u ovoj recenici?"<<endl;
cout<<"Ima "<<brojo<<" slova o."<<endl;
	return 0;
}
