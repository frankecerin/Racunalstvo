#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;



int main() {
	
	int vrijeme;
	
	cout<<"Upisi pocetni broj:"<<endl;
	cin>> vrijeme;
	
	int brojac;
	
	for(brojac=vrijeme;brojac>=0;brojac--){
		cout<<brojac<<endl;
		Sleep(500);
	}
	
	
	return 0;
}
