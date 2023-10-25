#include<iostream>   
#include<cmath>
 
int main()
{
	long long k, n;
	long long out(0);
	std::cin >> n >> k;
	long long ref = (n % 2 == 0) ? (n / 2)  : n / 2 + 1;
 
	
	if (ref < k)
	{    out = 2 * (k-ref) ;
	}
	else
		out = 2 * (k - 1) + 1;
 
 
	std::cout << out;  
 
	return 0;
}