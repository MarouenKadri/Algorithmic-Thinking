#include<iostream>  
int main()
{
	std::string s;  
	std::cin >> s;   
	size_t zero_player = s.find("0000000");    
 
	size_t one_player = s.find("1111111");  
	if (zero_player != std::string::npos || one_player != std::string::npos)
	{
		std::cout << "YES";
	}
	else std::cout<<"NO"; 
 
	return 0;
}