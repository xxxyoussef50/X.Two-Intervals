#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int a = 0, b = 0, c = 0, d = 0;
	cin >> a >> b >> c >> d;
	if (c >= a && c <= b)
	{
		if (d>=b)
		{
			cout << c << " " << b;
		}
		else if (d <= b)
		{
			cout << c << " " << d;
		}
	}
	else if (a >= c && a <= d)
	{  
		if(d>=b)
		{
			cout << a << " " << b;
		
		
		}
		else if (d <= b)
		{
			cout << a << " " << d;
		}
	}
	else cout << "- 1";


}