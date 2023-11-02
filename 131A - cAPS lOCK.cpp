#include<iostream>   
#include<string> 
std::string convertAlp(std::string s)
{
	
	for (char &c : s)
	{  
		if(isupper(c))  
			c = c + 32; 
	}
	return s; 
}  
 
int main()
{
	std::string s ,temp;     
	std::cin >> s;
	int count = 0; 
	
 
 
	
	
	for (int i = 0; i < s.size(); i++)
	{  
	   
 
		if (isupper(s[i]) )
		{
			count++; 	
		}
 
	}   
	 
	if ( (count == s.size() - 1 && !isupper(s[0])) )
	{
 
		for (int i = 1; i < s.size(); i++)
		{
			s = convertAlp(s);
			
		}
		s[0] = s[0] - 32;
		
	}
	if (count == s.size())
	{
		s = convertAlp(s);   
		
	}
 
 
 
 
	std::cout<<s ; 
	return 0 ; 
}