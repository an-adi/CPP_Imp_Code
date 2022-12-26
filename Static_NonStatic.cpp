#include <iostream>


class Bank //Bank Class Contain non_static data members, member functions ; static data member, member function;

{ public: //access specifier
  
static char bank_name; // this are static data members and dont have any objects and single value
static int IFSC_Code;

	char cust_name; //this are non static data members and it always has object and multivalued
	int cust_no;
	int cust_acno;

	static void bank_detail() //this is static data member function and it has only static data member in it and it is call by only class name
	{
		std::cout<<bank_name<<std::endl; //only static members in satic memebr function
		std::cout<<IFSC_Code<<std::endl;
	}

	void print_bank_name () //non static data member function and it can have both static as well as non static data members
  {
	  std::cout<<bank_name<<std::endl;

  }
  void print_cust_details()
  {
	  std::cout<<IFSC_Code<<std::endl; //static data member in non static member function
	  std::cout<<cust_name<<std::endl;//non static also
	  std::cout<<cust_no<<std::endl;
	  std::cout<<cust_acno<<std::endl;
  }

}; char  Bank::bank_name = 'S';// static memebr function assign value by here
 int Bank:: IFSC_Code = 703047;
 

 static int i; // this is globle static variable it can only used in this program file only
 int j;// this is also a globle variable it can be used in other program files using extern keyword

 void calculate() //function to demostrate local variable use
 {
	 int salary , other , annual; // this are function local variable
	 std::cout<<"Please Enter The Data To Calculate Your Annual Income"<<std::endl;
	 	 std::cout<<std::endl;
	 std::cout<<"Please Enter Your Monthly Salary"<<std::endl;
	 std::cin>>salary;
	 std::cout<<std::endl;
	 std::cout<<"Please Enter Your Other Monthly Income"<<std::endl;
	 std::cin>>other;
	 	 std::cout<<std::endl;
	 annual=(salary+other)*12;
     std::cout<<"The Annual Salary Is:"<<annual<<std::endl;
	 	 std::cout<<std::endl;
 }
 
 void repeat() //function to display globle varible used
 {
	 std::cout<<"Please Enter How Many Times You Want Print Name"<<std::endl;
	 std::cin>>j;
	 std::cout<<std::endl;

	 for (i=0; i<j; i++)
	 {
		 std::cout<<"This Is The Program To Show Use Of Local And Globle variable And Static Keyword"<<std::endl;


	 }
 }

int main() // main fun always return int value in cpp and it has to declare and initialized object inside it and static non staic fun are also called by here only and it only dont contain static data memebrs
{
	std::cout<<"This is output of non_static data member1"<<std::endl;
	Bank  aditya; // object creation of the non static data member 
	aditya.cust_name= 'A'; //giving values to non static data memeber 
	aditya.cust_no=01;
	aditya.cust_acno=111;
	aditya.print_cust_details();

	std::cout<<std::endl;

	std::cout<<"This is output of non_static data member2"<<std::endl;
	Bank akash;
	akash.cust_name= 'B';
	akash.cust_no=02;
	akash.cust_acno=121;
	akash.print_cust_details();

	std::cout<<std::endl;

	std::cout<<"This is output of static data member"<<std::endl; // performin operation on static data  using non static data member function 
	Bank Obj1;
	Obj1.print_bank_name();

	std::cout<<std::endl;
	
	std::cout<<"This is output of static member function"<<std::endl;//this is fun calling of  data member function and performin operation on static data memebrs
	Bank::bank_detail();
	

	 std::cout<<std::endl; // standalone functions
	 calculate();

	  std::cout<<std::endl;// standalone functions
	  repeat();



return 0;
}
