#include<iostream>  
int main()
{
	int n, h, a ,cnt(0);  
	std::cin >> n >> h;  
	while (n--)
	{
		std::cin >> a;  
		if (a > h) cnt = cnt + 2;
		else
			cnt = cnt + 1; 
	}
	std::cout << cnt; 



	return 0;
}