#include<iostream>  
#include<string> 
#include<algorithm>
int processingDigit(int &n)
{
	int firstDigit = n % 10;   
	int lastDigit = (n / 10) % 10;   
	if (firstDigit < lastDigit)  n = n / 10; 
	else
	{
		int x = n / 100;  
		int y = n % 10;  
		n = x * 10 + y; 
	}
 
	return n; 
}
 
int main()
{
	int  n;   
	std::cin >> n;   
	if (n > 0)
	{
		std::cout << n; 
		return 0;
	} 
	std::cout << processingDigit(n); 
	return 0;
 
 
}