#include<iostream>   
#include<map>  
#include<vector>

int main()
{
	int n;
	std::cin >> n;
	int* dynamicArray = new int[n+1];
	std::map<int, int > Gift;
	for (int i = 1;i < n + 1;i++)
	{
		int x; 
		std::cin >> x;
		Gift[i] = x; 
		dynamicArray[i] = 0; 

	}

	for (const auto& entry : Gift) {
		dynamicArray[entry.second] = entry.first; 
	}  
	for (int i = 1;i < n + 1;i++)
	{
		std::cout << dynamicArray[i] << std::endl;

	}

	return 0;
}