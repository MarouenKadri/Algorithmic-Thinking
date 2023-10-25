#include<iostream>  
 
int main()
{
	int n; 
	double x ,XX(0);  
	std::cin >> n; 
	int y = n; 
	while (n--)
	{
		std::cin >> x;   
		XX = XX + x;   
	
 
	}   
	std::cout << XX / y; 
 
 
 
	return 0;
}