#include <cstdlib>
#include <iostream>
#include <vector>

 using namespace std;

 //Ovo je program koji ucitava brojeve, te ih ispisuje od najmanjeg do najveceg kada se unese 0.
 
int
main () 
{
  
float a;
  
int x;
  
int y;
  
vector < float >V;
  
int min;
  
cout <<
    "Ovo je program koji ispisuje brojeve po zelji sve dok se ne upise 1 i ispisuje ih od najmanjeg do najveceg."
    << endl;
  
cout << "Unesite broj:" << endl;
  
cin >> a;
  
while (a != 0)
    
    {
      
cout << "Nastavite unositi brojeve dok ne unesete 0." << endl;
      
V.push_back (a);
      
cin >> a;
    
 
}
  
V.push_back (a);
  
cout << endl;
  
cout << "Vasi brojevi su:" << endl;
  
cout << endl;
  
for (x = 0; x < V.size (); x++)
    
    {
      
cout << V[x] << endl;
    
}
  
cout << "Brojevi od najmanjeg do najveceg:" << endl;
  
cout << endl;
  
for (x = 0; x < V.size (); x++)
    
    {
      
min = x;
      
for (y = x + 1; y < V.size (); y++)
	
	{
	  
if (V[y] < V[min])
	    
	    {
	      
min = y;
	    
}
	
}
      
float tren;
      
tren = V[x];
      
V[x] = V[min];
      
V[min] = tren;
  
} 
for (x = 0; x < V.size (); x++)
    
    {
      
cout << V[x] << endl;
    
}
  
return 0;

}
