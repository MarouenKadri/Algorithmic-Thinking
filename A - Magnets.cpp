#include<iostream>  
 
int main()
{
	int n ,cnt(0);  
	std::cin >> n;  
	std::string s ="", ls;
	while (n--)
	{
		std::cin >> ls;  
		if (s != ls) cnt++;
		s =  ls;   
		
	}   
	   
	std::cout << cnt; 
 
	return 0; 
}