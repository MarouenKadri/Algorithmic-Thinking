#include<iostream>     
#include<string>      
 
int* divideDigit(int n)
{
	int *arrayInt = new int[4];
	int i = 3;
	while (n / 10 != 0)
	{
		arrayInt[i] = n % 10;
		i = i - 1;
		n = n / 10;
 
	}
	arrayInt[0] = n ;
 
 
	return arrayInt;
}      
bool compareDigital(int x)  
 
{
	int *arrayInt = divideDigit(x);
	int cnt = 4;   
	for(int i=0;i<4;i++) 
		for(int j=0;j<4;j++)  
			if (arrayInt[i] == arrayInt[j])
			{
				cnt--; 
			}
 
 
	if (cnt < 0) return false; 
	
	return true;
}
 
 
int main()
{
	int x; 
	std::cin >> x; 
	x = x + 1; 
	while (!compareDigital(x))
	{
		x = x + 1; 
	}   
	std::cout << x;
    
 
	return  0;
}