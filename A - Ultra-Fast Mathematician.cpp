#include<iostream> 
#include<string>
int main()
{
	std::string s1;   
	std::string s2;  
	std::string result="";
	std::cin >> s1 >> s2;
	for (int i = 0;i < s1.size();i++)
	{
		if (s1[i] == s2[i])
			result += '0';
		else
			result += "1"; 
	}   
	//int number = std::stoi(result);  
	std::cout << result; 
 
 
	return 0;
}