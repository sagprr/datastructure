#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
        float x;
        float final2;
        float final;
	    float s,a,b,c;
	    cin >> s >> a >> b >> c;
	    
	    if(c<0)
	    {
	        x =  (s*(x/100)) ;
            final = s-x;
	    }

        else if ( c>0) 
        {
            x =  (s*(x/100));
            final2 = s+x;
        }


        
        if (final>=a && final <=b )
        {
            cout << "YES" << endl;
        }

        else if (final2>=a && final2 <=b )
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }



	    
	}
	return 0;
}
