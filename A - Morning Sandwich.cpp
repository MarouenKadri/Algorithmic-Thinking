#include<iostream>   
int main()
{
	int  t;   
	int b, c, h; 
	std::cin >> t;  
	while (t--)
	{
		int n_layers = 0; 
		std::cin >> b >> c >> h;    
		int n_slices = c + h; 
		if (b > n_slices)
		{
			n_layers = (n_slices * 2) + 1;
		}
		else n_layers = b * 2 - 1; 
		
		std::cout << n_layers << std::endl;
 
 
	
	}
 
 
 
 
 
 
 
	return 0; 
}