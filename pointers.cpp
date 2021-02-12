// compile: g++ -std=c++11 -o pointers pointers.cpp
#include <iostream>
#include <string>

typedef struct Student {
    int id;
    char *f_name;
    char *l_name;
    int n_assignments;
    double *grades;
} Student;

//int promptInt(std::string message, int min, int max);
//double promptDouble(std::string message, double min, double max);
//void calculateStudentAverage(void *object, double *avg);

int main(int argc, char **argv){
    Student student;
    double average;
    student.f_name= new char[128];
    
    std::cout<<"Please enter the students ID number: ";
    std:: cin>>student.id;    
    std::cout<<"\nPlease enter the students first name: ";
    std:: cin.getline( student.f_name, 128);
    std::cout<<"\nPlease enter the students last name: ";
    std::cin.getline(student.l_name, 128);
    std::cout<<"\nPlease enter how many assignments were graded: ";
    std:: cin>>student.n_assignments;
    int i;
    double assignments [student.n_assignments];
    for(i=0; i <student.n_assignments;i++){
    std::cout<<"\n Please enter a score for assignment "<<(i+1)<<": ";
    std::cin>> assignments[i];
    }


   //Sequence of user input -> store in fields of `student`
 
    // Call `CalculateStudentAverage(???, ???)`
    double *averge=0;
    calculateStudentAverage(assignments,&average);
    // Output `average`
    std:: cout<< average;

    return 0;
}
  /*
   message: text to output as the prompt
   min: minimum value to accept as a valid int
   max: maximum value to accept as a valid int
   */

int promptInt(std::string message, int min, int max)
{
    // Code to prompt user for an int
    std::cout<<message;
    return min;
}

/*
   message: text to output as the prompt
   min: minimum value to accept as a valid double
   max: maximum value to accept as a valid double
*/
double promptDouble(std::string message, double min, double max)
{
    std:: cout<< message;
    // Code to prompt user for a double
    return 0;
}

/*
   object: pointer to anything - your choice! (but choose something that will be helpful)
   avg: pointer to a double (can store a value here)
*/
void calculateStudentAverage(void *object, double *avg)
{
    // Code to calculate and store average grade
    double *i ;
    for(i = 0; i <object; i++){

    }
}
