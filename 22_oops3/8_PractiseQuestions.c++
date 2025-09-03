/*

#include <iostream>
using namespace std;


class Student {
    
public: 
const int rollno;
int age;

// Student(int r , int a) { we cant assign value to a const variable like this
//     rollno = r;
//     age = a;
// }

Student (int r , int a) : rollno(r) , age(a) { // initialization list ke through dena hoga

}
};

int main() {   
    
return 0;
}
*/


/*
Create a class date that contains three members namely date, month and year.Create 2 objects of this class with different dates and now compare the two. if the dates are equal then display msg as "Equal" otherwise "Unequal". Use getter setters

#include <iostream>
using namespace std;

class Date {
    private: 
        int date;
        int month;
        int year;
        
        public:
        int getDate() {
            return date;
        }
        void setDate(int date) {
            this->date = date;
        }
        int getMonth() {
            return month;
        }
        void setMonth(int month) {
            this->month = month;
        }
        int getYear() {
            return year;
        }
        void setYear(int year) {
            this->year = year;
        }
        
        bool operator ==(Date &d) {
            if(this->date == d.date) return true;
            else return false;
        }
    };
    
    int main() {
        Date d1;
    Date d2;

    d1.setDate(11);
    d2.setDate(11);
    d1.setMonth(7);
    d2.setMonth(3);
    d1.setYear(2005);
    d2.setYear(1991);
    
    if( d1 == d2 ) {
        cout<<"Dates are equal";
    }
    else {
        cout<<"Dates are unequal";
    }
    return 0;
}
*/

/*
    create a class to specify data on students with these attributes: Roll number, Name, Department, Courses, Year of joining. Create 2 class variables. Now, create a member function to check if two students have the same department

#include <iostream>
using namespace std;


class Student {
    private: 
      int rollno;
      string name;
      string department;
      string course;
      int joining_year;
      
    public: 
        int getRollno() {
            return rollno;
        }
        
        void setRollno(int rollno) {
            this->rollno = rollno;
        }

        string getName() {
            return name;
        }
        
        void setName(string name) {
            this->name = name;
        }

        string getDepartment() {
            return department;
        }
        
        void setDepartment(string department) {
            this->department = department;

        }
        string getCourse() {
            return course;
        }
        
        void setCourses(string course) {
            this->course = course;
        }
        
        int getJoining() {
            return joining_year;
        }
        
        void setJoiningyear(int joining_year) {
            this->joining_year = joining_year;
        }

        bool operator ==(Student &s) {
            if(this->department == s.department) return true;
            else return false;
        }
    };

int main() {
    Student s1;
    Student s2;
    Student s3;

    s1.setName("mohit");
    s1.setCourses("Java");
    s1.setDepartment("CSE");
    s1.setJoiningyear(2002);
    s1.setRollno(121);

    s2.setName("radhesh");
    s2.setCourses("laravel");
    s2.setDepartment("CSE");
    s2.setJoiningyear(2002);
    s2.setRollno(121);

    s3.setName("ravi");
    s3.setCourses("Node js");
    s3.setDepartment("IT");
    s3.setJoiningyear(2002);
    s3.setRollno(125);

    if(s3 == s2) {
        cout<<"they are from same department: "<<s3.getDepartment()<<" "<<s2.getDepartment()<<endl;
    }
    else {
        cout<<"different:"<<s3.getDepartment()<<" "<<s2.getDepartment()<<endl;

    }
    return 0;
}
*/

/*
    Emplyee class - Name , Emp id , salary
*/
#include <iostream>
#include <climits> // for INT_MIN
#include <algorithm> 

using namespace std;


class Employee {
    private: 
      string name;
      int empid;
      int salary;
      
    public: 
        int getId() {
            return empid;
        }
        
        void setEmpId(int empid) {
            this->empid = empid;
        }

        string getName() {
            return name;
        }
        
        void setName(string name) {
            this->name = name;
        }
        
        int getSalary() {
            return salary;
        }

        void setSalary (int salary) {
            this->salary = salary;
        }

        void display() {
            cout<<name<<" "<<empid<<" "<<salary<<endl;
        }
        

    };


   double calculateAverageSalary(Employee employees[] , int n) {
        int total = 0;
        for(int i = 0; i<n;i++) {
            total += employees[i].getSalary();
        }
        return (double)total / n;
   } 

   int maxSalary(Employee employees[] , int n) {
        int maxSal = INT_MIN;
        for(int i = 0; i<n;i++) {
            maxSal = max(employees[i].getSalary(), maxSal);
        }
        return maxSal;
   } 
int main() {
    Employee e1;
    Employee e2;
    Employee e3;
    Employee e4;


    e1.setEmpId(101);
    e1.setName("employee 1");
    e1.setSalary(10000);

    e2.setEmpId(102);
    e2.setName("employee 2");
    e2.setSalary(20000);

    e3.setEmpId(103);
    e3.setName("employee 3");
    e3.setSalary(30000);

    e3.setEmpId(104);
    e3.setName("employee 4");
    e3.setSalary(40000);

    e4.setEmpId(105);
    e4.setName("employee 5");
    e4.setSalary(50000);

    Employee arr[5] = {e1, e2, e3, e4};

    cout<<"Average Salary = "<<calculateAverageSalary(arr, 5)<<endl;

    cout<<"max Salary = "<<maxSalary(arr, 5)<<endl;
    return 0;
}