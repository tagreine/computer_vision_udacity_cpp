#include <iostream>

using namespace std;

class Employee {
    /* give some attributes and make them private, public, or protected */
private: 
    string Name;
    string Company;
    int Age;
public:
    // setter - setting the name of the string Name
    void setName(string name) {
        Name = name;
    }
    // getter - getting the name of the string Name
    string getName() {
        return Name;
    }
    // setter - setting the company of the string Company
    void setCompany(string company) {
        Company = company;
    }
    // getter - getting the company of the string Company
    string getCompany() {
        return Company;
    }
    // setter - setting the age of the int Age 
    void setAge(int age) {
        if (age>=18)
        Age = age;
    }
    // getter - getting the age of the int Age
    int getAge() {
        return Age;
    }

public:
    void IntroduceYourself() {
        std::cout<<"Name - " << Name << std::endl;
        std::cout<<"Company - " << Company << std::endl;
        std::cout<<"Age - " << Age << std::endl;
    }
    // create a constructor of the class Employee
public:
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Thomas", "Accenture", 39);
    // employee1.Name = "Thomas"; -> poor setup
    // employee1.Company = "Accenture"; -> poor setup
    // employee1.Age = 39; -> poor setup
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amazon", 29);
    // employee1.Name = "John"; -> poor setup
    // employee1.Company = "Amazon"; -> poor setup
    // employee1.Age = 29; -> poor setup
    employee2.IntroduceYourself();

    employee1.setAge(15);
    std::cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<std::endl;
}

