#include<iostream> 
#include<string>  

int main()
{   
	int n, cnt(0);
	std::cin >> n; 
	std::string s;  
	std::cin >> s; 
	for (int i = 0;i < n-1;i++)
	{ 
		if (s[i] == s[i + 1])  cnt++;

	}  
	std::cout << cnt; 
	return 0;
}