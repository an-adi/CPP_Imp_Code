#include <iostream>
//read coments at end only...
	class Indian
	{
	public: //acces specifire to call class 
		const int voter_id; //const data memeber it cant be change any where and can be only assigned inside constructor initializer list 
		const long int adhar_no;
		char name;//non_const data members can be assigned values in objects also 
		char state;//but if you want to use the in const object they automatically beacome const and you can assigned them values in constructor initializer list


		Indian (): voter_id (10100), adhar_no (78965432182), name('C'), state('D') //this is constructor and from (): onward it is constructor initializer list, you can have const data memebers as well as non const data members assignedd here 
		{
			// in the constructor you can give parameter also in India(int a, b,c,d): voterid(inta), adharno(intb)....so onlike this and pass parameter to constructor from inside constructor of main fun called as parameterize constructor 
			//you can inistialized non const data memebers also from here 
			//you can  not assinged const data member vaule from inside constructor but you can assigned value to non const data memeber inside constructor
			std::cout<<std::endl;
			std::cout<<std::endl;
		}
		
	
		 void nationality() //this is non const data memeber function and you can nhave const as well as non constant data memeber inside it and you cant call in via main for const objects
		{
			std::cout<<voter_id<<std::endl; //you can access them here but you cant chaned them as they are const so their call from objedct is (const demo const*this) is coming which makes them unchangeble
			std::cout<<adhar_no<<std::endl;
			std::cout<<name<<std::endl;//but you can this non const data member cause they have the (const demo * this) which makes them to change so we chage like this==(this-> state = 'G';)
			std::cout<<state<<std::endl;
		}

		void adhar_voter_id() const /*inside this you cant change anything whether its called by non const or const object or it has const or non const data member cause its this pointer is 
			(const demo const *this)*/
		{
			std::cout<<adhar_no<<std::endl; //you cant change any one
			std::cout<<voter_id<<std::endl;
			std::cout<<name<<std::endl;
			std::cout<<state<<std::endl;

		}
};

	int main()
	{

		std::cout<<"This Is Non_Const Object and It Is Calling Only Non_const function when non const data memebers are assigned values in objects "<<std::endl;
		
		Indian ob1;//non const object
		ob1.name = 'A'; //this two are non const data members so they can have value here to assigned
		ob1.state ='B'; 
		ob1.nationality();//so this non const data member fun will go with this assigned values 



		std::cout<<"This Is Non_Const Object and It Is Calling Only Non_const function when non const data memebers are not assigned values in objects "<<std::endl;
		
		Indian non_const_unsingned;//non const object not assined value for non const
	    non_const_unsingned.nationality();// it is non const fun but it has no values for state and name so it will go with const values which are in constructor for const and non const data memebers



		std::cout<<"This Is Non_Const Object and It Is Calling Only const function when non const data memebers are assigned values in objects "<<std::endl;

		Indian ob2;// non const object
		ob2.name = 'A';//values are assingned to state and name which are non const
		ob2.state ='B';
		ob2.adhar_voter_id();//this is const member fun it will have const value for const data memebers but its have above assinged value for non const data memebers



		std::cout<<"This Is Non_Const Object and It Is Calling Only const function when non const data memebers are   not assigned values in objects "<<std::endl;

		Indian ob3; //this is non const object not assigned value for non const
		ob3.adhar_voter_id();// it is const fun but it has no values for state and name so it will go with const values which are in constructor for const as well as non const members



		std::cout<<"This Is Const Object and It Is Calling Only const function when non const data memebers are assigned  and const data meembers cant have values here they can have values in constructor "<<std::endl;

		const Indian ob4;//this const object , in this all beconme const you cant assignedd value to non const even as they become const you can assigned in constructor only
						//you also cant call non const fun here as all data become const so it have abality to changed data 
		ob4.adhar_voter_id();//you can only call const data memeber fun here and cant non const and have to initialized all the data memebers you have for this fun in cunstructor and they non static are only have const values for this object only not for others

		return 0;//for c you have to return positive return type in interger format 
	}


	//you can have a data member const as well as ststic ....const static int a; OR static const int b;
	//in any order but you cant have member fun like static and const cause in staic the object not give this pointer so their in no need to make that member fun const but you can 
	//while making data memebef const you have to write keyword const at starting 
	//while making data mem fun const you cant write at starting const keyword cause it will make thw fun const not the value present in this pointer const
	//so always write const at last for data member fun 
	//syntax : 1)const data mem. ==> cont int a
	//		2) const data mem fun ==> void fun () const 
	//		3) for static and const data member fun is ==> const static int a; OR static const int a;
	//		4) you cant make const data mem fun static ..
