#include<iostream>  
#include<algorithm>
#include<vector>
 
void algo()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	int minVal = std::min(std::min(a, b), c);
	int res = (a + b + c) - minVal;
	if (res >= 10)  std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
 
}
 
int main()
{   
	int t; 
	std::cin >> t;   
	while (t--)
	{
		algo(); 
	}
	
	return 0;
}