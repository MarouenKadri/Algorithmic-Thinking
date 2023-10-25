#include<iostream>  
 
int main()
{
	int x;  
	int indexI, indexJ; 
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
     		std::cin >> x;
			if (x == 1)
			{
				indexI = i; 
				indexJ = j;
			}
		}  
	int res = abs(indexI - 2) + abs(indexJ - 2);
 
			
 
	std::cout << res;
 
	return 0;
}