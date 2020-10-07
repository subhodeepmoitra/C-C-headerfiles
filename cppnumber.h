#include <iostream>
#include <math.h>
void even_odd (int n)
{
    if (n%2==0)
    {
        std :: cout << "Even number \n" << std :: endl;
     }
    else
     {
         std :: cout << "Odd number \n" << std :: endl;
      }
} 
int factorial (int no)
{
	int fact = 1, i;
	for (i = 1 ; i <= no ; i++){
		fact = fact * i;
	}
	return fact;
}
void prime (int n)
{
    int i, c=0;
    for (i=1;i<=n;i++){
        if (n % i == 0)
        {
            c++;
        }
    }
        if (c == 2)
        {
            std :: cout << "The number is prime" << std :: endl;
        }
        else if (c != 2)
        {
            std :: cout << "The number is not prime" << std :: endl;
        }
    }
    void armstrong (int n)
    {
    	int r , sum = 0 , temp;
    	temp = n;
    	while (n > 0)
    	{
    		r = n%10;
    		sum = sum + (r*r*r);
    		n = n/10;
		}
		if (temp == sum)
		{
			std :: cout << "Armstrong number" << std :: endl;
		}
		else{
			std :: cout << "Not an Armstrong number" << std :: endl;
		}
	}
	void palindrome (int n)
	{
		int r , sum = 0 , temp;
		temp = n;
		while (n>0){
			r = n%10;
			sum = (sum*10)+r;
			n = n/10;
		}
		if (temp == sum){
			std :: cout << "Palindrome Number" << std :: endl;
		}
		else{
			std :: cout << "Not a Palindrome Number" << std :: endl;
		}
	}
	void comnum_sum(int a , int ai , int b , int bi)
	{
		int sum_real = 0;
		int sum_imaginary = 0;
		sum_real = a+b;
		sum_imaginary = ai+bi;
		std :: cout << "The sum of the two complex numbers is " << sum_real << "+i" << sum_imaginary << std :: endl;
	}
	

