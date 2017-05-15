/*You are given two classes, Person and Student, where Person is the base class and Student is the derived class.
Completed code for Person and a declaration for Student are provided for you in the editor.
Observe that Student inherits all the properties of Person.
A Student class constructor, which has 4 parameters:
A string, firstName.
A string, lastName.
An integer, id.
An integer array (or vector) of test scores, scores.
Complete the Student class by writing char calculate() method as given below specification:
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
https://s3.amazonaws.com/istreet-assets/fCMLZuPq1Dhbc2UMjskbKg/grade%20info.png
Sample Input
Heraldo Memelli 8135627
2
100 80
Sample Output
 Name: Memelli, Heraldo
 ID: 8135627
 Grade: O
Explanation
In Sample Input
Heraldo Memelli is the name of student including first and last name.
8135627 is id of the student
2  stands for number of subjects
100 80 are marks of 2 subjecst
This student had 2 scores to average: 100 and 80. The student's average grade is
(100+80)/2=90. An average grade of 90 corresponds to the letter grade O, so calculate () method should return the character 'O'.*/
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}
};
class Student :  public Person{
	private:
		vector<int> testScores;
	public:
Student(string f_name,string l_name,int id,vector<int>t):Person(f_name,l_name,id)
            {
            for(int i=0;i<t.size();i++)
                testScores.push_back(t[i]);
        }
    vector<int>::iterator it;
    char calculate(){
        char grade ;
        int avg;
        int pre=0;
        for(it = testScores.begin(); it != testScores.end(); it++){
            pre+=*it;}
        avg=pre/testScores.size();
        if(avg<=100 &&avg>=90){
            grade='O';
        }
        else if(avg<90 &&avg>=80){
            grade='E';
        }
        else if(avg<80 &&avg>=70){
            grade='A';
        }
        else if(avg<70 &&avg>=55){
            grade='P';
        }
        else if(avg<55 &&avg>=40){
            grade='D';
        }
        else{
            grade='T';
        }
        return grade;
    }
  		// Write char calculate()
};
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
