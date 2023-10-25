#include<iostream>  
#include<algorithm>
int main()
 
{
	int a, b; 
	int outputA, outputB; 
	std::cin >> a >> b; 
	int maxValue= std::max(a, b); 
	int minValue = std::min(a, b);
	outputB = (maxValue - minValue) / 2;   
	outputA = minValue ; 
 
	std::cout << outputA << " " << outputB; 
 
	return 0;
}