#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    while(cin>>x&&x){
    	if(x%2==0){
          c=0;
          for(b=1; b<=5; b++)
          {     
          	  
                c=c+x;
               x=x+2;
            }
            cout<<c<<endl;
            }
     else{
     	x++;
     	c=0;
     	for(b=1; b<=5; b++)
          {     
          	    
                c=c+x;
               x=x+2;
            }
            cout<<c<<endl;
        }
        
     }}
