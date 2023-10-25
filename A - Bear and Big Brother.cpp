#include<iostream>    

int main()
{
	int a, b; 
	std::cin >> a >> b;  
	int year(0); 

	while (b >= a)
	{
		a = a * 3; 
		b = b * 2; 
		year++;
	}
	std::cout << year; 




	return 0;
}