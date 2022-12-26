#include <iostream>//it is heder file of cpp for input output of any type
 int main() //return type in cpp for main function is always int type to execute default exaption handeling of cpp language
 {
	 int a, b, c;
	std :: cout<<"Please Enter The Range Of Prime Numbers" << "\n"; //cout is method/function of "std" class and std:: is namespace (portion of code special in cpp) includation ...it is standard output  and < <is selection operator of function like %d in c 
    std :: cin>>a; // standard output ,, we can use endln or << "\n" or "\n" for op on new line
	for (b=0; b<=a; b++)
	{
		if(b%2!=0)
		{
			std :: cout<<b<<"\t";
		}

	}
	 return 0; //returns integer value to main it should be positive ,, if negative default exception handeling triggers

 }