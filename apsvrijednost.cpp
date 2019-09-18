#include <iostream>
#include <cstdlib>

using namespace std;



int main() {
	int a, x;
	
	cout<<"Upisi broj:";
	
	cin>>a;
	
	x=a*(-1);
	
	if (a>0){
		cout<< "Broj je pozitivan i njegova absolutna vrijednost je:" << a <<endl;
	}
	
	else
		cout<< "Broj je negativan i njegova apsolutna vrijednost je:"<< x <<endl;

			
	
	return 0;
	
}
