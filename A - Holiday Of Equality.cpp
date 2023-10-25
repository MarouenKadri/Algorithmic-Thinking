#include<iostream>   
#include<vector> 
#include<algorithm>
int main()
{
	int n; 
	int sum(0); 
	std::vector<int> burle; 
	int a;  
	std::cin >> n; 
	for (int i = 0;i < n;i++)
	{
		std::cin >>a;
		burle.push_back(a);


	}
	std::sort(burle.begin(), burle.end());   
	int x = burle[n - 1]; 
	for (int i = 0;i < n - 1;i++)
	{
		sum = sum + (x - burle[i]); 
	}  
	std::cout << sum;

	
	return 0; 
}