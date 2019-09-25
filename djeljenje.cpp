#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;   

int division(int a, int b)
{
    int c=a/b;
    
    return c;
    
}


int main()
{
    int a; int b;
    cout<<"Upisite a:"<<endl;
    cin>>a;
    
    cout<<"Upisite b:"<<endl;
    cin>>b;
    
    if(b>a){
            cout<<"Upisite drugi broj manji od prvoga."<<endl;
           
    }
    
    int z;
    z=division(a,b);
    
    cout<<z<<endl;
    
	system("PAUSE");
    
    return 0;
	
	
}
