#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y,z;
	    cin >> x >> y;
	    
	    int arr[x];
	    
	    for(int i=0;i<x;i++)
	    {
	        cin >> arr[i];
	    }
	    
        

	    for ( int i=0;i<x;i++)
	    {
            
            if ( z>=0 )
            {
                cout << "1" << endl;
            }

            else
            {
                cout << "0" << endl;
            }

            z = y - arr[i];
            

	    }
       
	}

	return 0;
}
