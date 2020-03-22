#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int main() 
{
vector <int> p;	
p.push_back(3);
p.push_back(10);	
p.push_back(33);	
cout<<"Vektor 1. = "<<p[0]<<endl;
cout<<"Vektor 2. = "<<p[1]<<endl;
cout<<"Vektor 3. = "<<p[2]<<endl;

if(!p.empty() ) p.clear();
else cout<<"Vektor je prazan.";

vector<int> p2;
p.push_back(10);
cout<<"Unesen je drugi vektor."<<endl;
if(p==p2) cout<<"Vektori su jednaki."<<endl;
else cout<<"Vektori nisu jednaki."<<endl;
cout<<"Vektori ce se sada izjednaciti"<<endl;

p=p2;
if(p==p2) cout<<"Vektori su jednaki."<<endl;
else cout<<"Vektori nisu jednaki."<<endl;

	system("PAUSE");
	return 0;
	
}

