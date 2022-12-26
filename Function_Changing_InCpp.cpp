#include <iostream>
#include <conio.h>
 class Example
 {
 public:
	 int a;
	 int b;
	 int c;
	  

	 Example * In_Data() //for first condition we have to return address to this pointr thats why Example*
	 {
		 std::cout<<"Please Enter Values"<<std::endl;

		 std::cin>>a;
		 std::cin>>b;
		 std::cin>>c;
		
		 return this;
	 }

	 Example & Show_Data()//for second condition we have to give object to back
	 {
		 std::cout<<"This is Data You Entered"<<std::endl;
		 std::cout<<a<<std::endl;
		 std::cout<<b<<std::endl;
		 std::cout<<c<<std::endl;

		 return *this;
	 }

	 void Message()//no condition to execute
	 {
		 std::cout<<"\t \t Data Entering And Outputing Is Successful Using Function Changing Method"<<std::endl;
		 getch();
	 }
	

 };

 int main()
 {
	 Example A1;
	 A1.In_Data() -> Show_Data().Message(); //function changing syntax

	 return 0;
 }
