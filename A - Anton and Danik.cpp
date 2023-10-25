#include<iostream>  
#include<string> 
int main()
{
	std::string s;   
	int flag(0); 
	int n; 
	std::cin >> n; 
	std::cin >> s;
	for (char c : s)
	{
		if (c == 'D')  flag++;
		else flag--; 

	}  
	if (flag > 0)
	{
		std::cout << "Danik";
	}
	else if (flag < 0)
	{
		std::cout << "Anton";
	}
	else std::cout << "Friendship";


	return 0;
}