#include<iostream>   

int main()
{
	long long t, n; 

	std::cin >> t; 
	while (t--)
	{
		std::cin >> n; 
		if (n == 1 || n == 2)
		{
			std::cout << "0"<<std::endl; 
			continue;
		}
		if (n % 2 != 0)
		{
			std::cout << n / 2<<std::endl;
		}
		else
		std::cout << n / 2-1<<std::endl;
        




	}
	return 0;
}