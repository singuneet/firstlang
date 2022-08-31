#include<iostream>
using namespace std;

class student{
    int studentId[60];
    int studentMarks[60];
    int studentNo[60];

    public:
        void initCounter(void){
            int counter = 0;
        }
    
        void studentName(void);
        void displayStudent(void);
};

void student ::studentName(void){
    cout<<"Enter student ID"<<counter + 1<<endl;
    cin>>studentId[counter];
    cout<<"Enter student marks"<<endl;
    cin>>studentMarks[counter];
    cout<<"Enter student contact no"<<endl;
    cin>>studentNo[counter];
    counter ++;
}

void student :: displayStudent(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Student Id "<<studentId[counter];
        cout<<" Student Marks "<<studentMarks[counter];
        cout<<" Student no "<<studentNo[counter];
    }
    
}

int main(){
    student Raj;
    student Rahul;
    student Ayush;
    student Tushar;
    student Kaus;
    Raj.initCounter();
    Raj.studentName();
    Rahul.studentName();
    Ayush.studentName();
    Tushar.studentName();
    Kaus.studentName();

    return 0;
}