
#include <iostream>  
int main()
{
	long long n;

	int Nbr7(0), Nbr4(0);
	long long x;
	bool flag = true;
	int Nbr(0);
	std::cin >> n;
	
	while (n)

	{
		x = n % 10;
		

		if (x == 7 || x == 4)
		{

			Nbr++;
			
		}
		n = n / 10;

	}

	if (Nbr == 7 || Nbr == 4)
	{
		std::cout << "YES" << std::endl;
	}  
	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}