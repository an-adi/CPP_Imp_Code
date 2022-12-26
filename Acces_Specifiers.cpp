//const cast<int>&a;
#include <iostream>

class God	//parent class 
{
public: //can be use by child or parent and also by other class by
	//other class need to create object of parent class in it
	int a;
private: //can be use by child or parent
	int b;
protected://only use by god 
	int c;

	

public:
	God ()
	{
		a=10;
		b=80;
		c=99;

	}
	void show_god()
	{
		std::cout<<a<<std::endl;
		std::cout<<b<<std::endl;
		std::cout<<c<<std::endl;
	}


};

class Humans : God //creating child class
{
public : //acess specifier of their own class 
	void show_human() //printing data member function for this class
	{
		std::cout<<a<<std::endl;//only private and public are accesible by child class not protected
		std::cout<<c<<std::endl;
	}

	
};


class Unknown //non child class 
{
public:
	 God Q; //for non child class  its necessary to create object 
	 void show_unknown() //printing data member function for this class
	 {

	    std::cout<<Q.a<<std::endl; // only public data members can access		
	 }
};


int main()
{
		
	God g1;
	std::cout<<"All data member of parent class accesible by itself and hence printed:"<<std::endl;
	g1.show_god();

	std::cout<<std::endl;

	std::cout<<"Public data member only  of class accesible by main function:"<<std::endl;
	std::cout<<g1.a<<std::endl; //only public can be access by main function by creating its object in it not private or protected
	
	
	Humans h1;
	std::cout<<"Public and private  data member of class accesible by its child class only:"<<std::endl;	
	h1.show_human();
	
	Unknown u1;
	std::cout<<"Public data member only  of class accesible by main unknown class which not child class:"<<std::endl;
	u1.show_unknown();

	return 0;
}