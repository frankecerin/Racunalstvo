#include <iostream>
#include <cstdlib>



using namespace std;


int main() {
	
	int n;
	cout<<"Unesite broj clanova niza:"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Unesite clanove niza (broj od kojeg niz pocinje):"<<endl;
	for (int i=0;i<n;i++){
		cin>>a[i];
}	
	
	cout<<"Ispis niza:"<<endl;
	for (int 
	i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
		
	system("PAUSE");	
		
	return 0;
}
