#include<iostream>   
int main()
{
	std::string t, s;
	std::cin >> s >> t; 
	int cnt = 0; 
	for (int i = 0 ,j =s.size() ;  i<=j  ;i++ ,j-- )
	{
		if (s[i] != t[s.size() - i - 1]  || t[i] != s[s.size() - i - 1])
		{
			std::cout << "NO"; 
			return 0;
		}
	
 
	}
 
	std::cout << "YES";
	return  0;
}