#include<iostream>  
#include<string>

std::string toUppercase(const std::string& str)
{   
	std::string temp = str; 
	for (char& c : temp)
	{
		c = std::toupper(c); 
	}
	return temp; 

}


int main()
{
	std::string s1; 
	std::string s2;  
	int  cnt3(0);
	std::cin >> s1 >> s2;  
	 
	 s1 = toUppercase(s1);   
	 s2 = toUppercase(s2);
	for (int i = 0;i < s1.size();i++)
	{

		if (s1[i] > s2[i])
		{ 
			std::cout << "1";
			return 0;
		}
			
		else if (s1[i] < s2[i])
		{
			std::cout << "-1";
			return 0;
		}
		   
		else 
			cnt3++;
	}   
	if (cnt3 ==s1.size() ) 
		std::cout << "0";
	
	

	return 0;
}