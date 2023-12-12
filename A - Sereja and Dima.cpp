#include<iostream>  
#include<vector> 
#include<algorithm>

int main()
{ 
	int n;
	int j; 
	int Sereja(0), Dima(0); 
	std::vector<int>numbers; 
	std::cin >> n;  
	while (n--)
	{
		std::cin >> j; 
		numbers.push_back(j); 

	}  
 
	while (!numbers.empty())
	{
		// Sereja's turn
		if (numbers.front() > numbers.back())
		{
			Sereja += numbers.front();
			numbers.erase(numbers.begin());
		}
		else
		{
			Sereja += numbers.back();
			numbers.erase(numbers.end() - 1);
		}

		// Dima's turn - only proceed if numbers is not empty
		if (!numbers.empty())
		{
			if (numbers.front() > numbers.back())
			{
				Dima += numbers.front();
				numbers.erase(numbers.begin());
			}
			else
			{
				Dima += numbers.back();
				numbers.erase(numbers.end() - 1);
			}
		}
	}

	std::cout << Sereja << " " << Dima; 


	return 0;
}