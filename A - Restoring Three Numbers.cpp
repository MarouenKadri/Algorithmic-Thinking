// I don't know how i solved it haha 


#include<iostream>  
#include<algorithm>    
#include<vector>
int main()
{
	int x1, x2, x3, x4;
	int a(0), b(0), c(0);  
	std::vector<int>Numbers; 
	std::cin >> x1 >> x2 >> x3 >> x4;
	Numbers.push_back(x1); 
	Numbers.push_back(x2);  
	Numbers.push_back(x3); 
	Numbers.push_back(x4); 
	std::sort(Numbers.begin(), Numbers.end()); 
	a = Numbers[3] - Numbers[0]; 
	b = std::min(abs(a - Numbers[1]), abs(a - Numbers[2])); 
	c = Numbers[3] - a - b;

	std::cout << a << " " << b << " " << c;

	return 0;
}