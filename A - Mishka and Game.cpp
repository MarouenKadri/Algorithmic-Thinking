#include<iostream>  
#include<algorithm>  

int main()
{
	int n; 
	int m, c;
	int sum_m(0), sum_c(0),withdraw(0);
	std::cin >> n; 
	while (n--)
	{ 
	  std::cin >> m;
	  std::cin >> c; 
	  if (m > c)  sum_m = sum_m + 1; 
	  if (c > m)  sum_c = sum_c + 1;
	  if (c == m)    withdraw = withdraw + 1;


	}  

	if (sum_m > sum_c) std::cout << "Mishka";   
	if(sum_c>sum_m) std::cout << "Chris";
	if(sum_c==sum_m) std::cout << "Friendship is magic!^^";


	

	return 0;
}