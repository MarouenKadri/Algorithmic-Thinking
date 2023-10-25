#include<iostream>   
 
int main()
{
	int n, cnt(0); 
	std::cin >> n;  
	while (n--)
	{
		int ai; 
		std::cin >> ai;   
		if (ai == 1) cnt--; 
 
	}  
	if (cnt < 0) std::cout << "HARD" << std::endl;
	else std::cout << "EASY" << std::endl;
 
 
 
	return 0;
 
}