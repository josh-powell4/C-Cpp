#include <iostream>

//This line of code is used so that I don't have to keep typing std:: (ie std::string Name, std::int, std::cout)
using namespace std;


/*
*Abstraction - Hiding complex things behind a procedure that looks simple.
*Example: A smartphone can take a photo by a click of a button, however, the company can see the logic and complex code that is used for a person to use a interface to take a picture.
*/
//Phase 4 : Abstraction
    //This class will serve as a contract
class AbstractEmployee{
    virtual void AskForPromotion() = 0;//Pure virtual function (aka virtual function
};

//Phase 1 : Class and Objects
    // Rule: Everything inside a class is private by default in C/C++

//This class will serve as the blueprint for an Employee
class Employee {
//[a1.1] private:  (Instances inside a class are private by default. this is an example of what it'll look like. However, we need public to access the Employee class information.)
//Class method - Function
//public:
    // string Name;
    // string Company;
    // int Age;
    // string Role;

//Phase 3 : Encaspsulation [b1.1]
/**
 * @brief Reference to [b1.1]
 * Encaspulation - The idea of bundling data and method that opporate under one class
 * - We do this to prevent direct modification of data.
 * - Public functions are going to be used to invoke information from a class.
 * - Getters and Setters
 */
private:
    string Name;
    string Company;
    int Age;
    string Role;

//b1.2
    public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
     void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
     void setAge(int age){
         //If you want to add a limitor on age you can add a check
         //[b1.3]
        if(age>=18)

        Age = age;
    }
    int getAge(){
        return Age;
    }
     void setRole(string role){
        Role = role;
    }
    string getRole(){
        return Role;
    }



    void IntroduceMyself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
        std::cout << "Role - " << Role << std::endl;
    }  // [a1.2] Without the class method I would have to copy lines 21-24 four times just to repeatly intoduce myself 5x.
    
    //Phase 2 : Constructor
    Employee(string name, string company, int age, string role){
        Name = name;
        Company = company;
        Age = age;
        Role = role;

    }
    void AskForPromotion() {
        if(Age>30)
            std::cout << Name << " got promoted!" << std::endl;
        else   
            std::cout << Name << " , we're sorry but you was not considered for promotion.." << std::endl;
    }
};

/**
 * @brief 
 * Phase 5 : Inheritance
 * - The capability of a class to derive properties and characteristics from another class.
 * Sub Class: The class that inherits properties from another class is called Sub class or Derived Class. 
 * Super Class: The class whose properties are inherited by sub class is called Base Class or Super class. 
 */
//Devloper class have all of the properties from the above classes
class Developer: Employee {
public: 
    string FavProgrammingLang;
    Developer(string name, string company, int age, string role, string favProgrammingLang)
            :Employee(name, company, age)
        {
            FavProgrammingLang = favProgrammingLang;   
        }
        void FixBug() {
            std::cout << getName() << "Fixd bug using " << FavProgrammingLang << std::endl;
        d.FixBug();
    }
};


int main(){
    //cout<<"Program test"; - Sucessful

    //instances of Employee
        //Access multipliers: Public, Protected, and Private (ie refer to a1.1)
  /*  Employee employee1;
    employee1.Name = "Joshua";
    employee1.Company = "THRE3 KINGZ STUDIOS";
    employee1.Age = 26;
    employee1.Role = "Founder/CEO";
    employee1.IntroduceMyself(); // If you want to introduce yourself 5x just copy this line four more times. (ie refer to a1.2)
    
    Employee employee2;
    employee1.Name = "Joseph";
    employee1.Company = "THRE3 KINGZ STUDIOS";
    employee1.Age = 26;
    employee1.Role = "CoFounder/CEO";
    employee1.IntroduceMyself();
*/



    //A more optimal method. 
    //Constuctors invoked when object of a class is created. 
    //A default constructor is a constructor which can be called with no arguments (either defined with an empty parameter list, or with default arguments provided for every parameter). A type with a public default constructor is DefaultConstructible. (ie refer to a2.1-2)

    Employee employee1 = Employee("Joshua", "THRE3 KINGZ STUDIOS", 26, "Founder/CEO");
    employee1.IntroduceMyself(); // If you want to introduce yourself 5x just copy this line four more times. (ie refer to a1.2)
    
    Employee employee2 = Employee("Joseph", "THRE3 KINGZ STUDIOS", 26, "CoFounder/CEO");
    employee2.IntroduceMyself();

   Developer d = Developer("Josiah", "YT-3KZ", 18 , "C++");

   // employee1.AskForPromotion();
    //employee2.AskForPromotion();

//Now the Employee's data is private and we can access/modify the data by using encapsulation (ie Getters and Setters) to make changes to the employee's information. (refer to b1.2)
    employee1.setAge(39);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old.";
    
    //validation rule (refer to b1.3)
    employee2.setAge(12);
    std::cout << employee2.getName() << " is " << employee2.getAge() << " years old.";


/**
 * [a2.1]
Here is the output you will get if you do the following:

Employee employee1;
    // employee1.Name = "Joshua";
    // employee1.Company = "THRE3 KINGZ STUDIOS";
    // employee1.Age = 26;
    // employee1.Role = "Founder/CEO";
    employee1.IntroduceMyself(); // If you want to introduce yourself 5x just copy this line four more times. (ie refer to a1.2)
    
    Employee employee2;
    /*employee1.Name = "Joseph";
    employee1.Company = "THRE3 KINGZ STUDIOS";
    employee1.Age = 26;
    employee1.Role = "CoFounder/CEO";
    employee1.IntroduceMyself();
    */
/**
 * [a2.2]
Name - 
Company -
Age - 0
Role -
Name -
Company -
Age - 0
Role -
**/
















}