#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <vector>


bool
f (int y)
{
  string s = to_string (y);
  int m = s.length ();

  for (int i = 0; i < m; i++)
	{
	  if (s[i] == '0' || s[i] == '1')
		{

		}
	  else
		{
		  return false;
		}
	}
  return true;

}




bool
fn (int y, int z, vector < int >a)
{
    
    if(f (y)==1){
        return true;
    }
    
    
// cout << "ram";
  if (y == 1)
	{
	  return true;
	}

  for (int i = 0; i < z; i++)
	{
	  if (y % a[i] == 0)
		{
		  //  cout << y << endl;
		  return fn (y / a[i], z, a);
		}
	}


  return false;
}





int
main ()
{
  int t;
  cin >> t;

  vector < int >a;
  for (long long int i = 10; i < pow (10, 5); i++)
	{
	  if (f (i))
		{
		  a.push_back (i);
		}

	}

  int z = a.size ();

  while (t--)
	{
	 
	 long long int n;
// 	cout << "hero";
	  cin >> n;
    // cout << "ramayan";
	  string s = to_string (n);
	  int m = s.length ();


bool b = fn (n, z, a);

	if(b==1){
	    cout << "YES" << endl;
	}
	else{
	    cout << "NO" << endl;
	}








	}

}
