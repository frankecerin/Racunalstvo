#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;   

int ispit(int a, int b)
{
    int c;
    if(a<b)
    c=a;
    
    else if(b<a)
    c=b; 
    return c;
}


int main()
{
    int a, b;
   cout<<"Upisite a:";
   cin>>a;
   
   cout<<"Upisite b:";
   cin>>b;
   
   int x;
   x=ispit(a,b);
   cout<<"Manji broj je:"<<x<<endl;
   
	system("PAUSE");
    
    return 0;
	
	
}
