#include<iostream>  
#include<algorithm>  

int main()
{
	int t, a, b ;
	std::cin >> t;  
	while (t--)
	{
		std::cin >> a >> b;   
		
		if (a % b == 0 && a >= b)
		{
			std::cout << 0 << std::endl;
		}
		else
		{
			std::cout << ((a / b) + 1) * b - a << std::endl;

		}

		
	}
	return 0;
}