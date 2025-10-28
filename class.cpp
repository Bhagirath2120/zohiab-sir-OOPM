#include<iostream>
using namespace std;

class student{                                 // student is a class
    int Roll;                                 // private memory created
    int Marks;                               // private memory created
    int Per;                                // private memory created
public:                                    // every thing is public now
int addStudent(int R,int M,int P){        // addstudent is a function
    Roll=R;
    Marks=M;
    Per=P;
}
     
int SetDisplay(){                    // SetDisplay is a function

    cout<<Roll<<" "<< Marks<<" "<<Per<<endl;
return 0;

}
};


int main(){
int Roll,Marks,Per;
cout<<"Enter your roll number: ";
cin>>Roll;
cout<<"Enter your marks: ";
cin>>Marks;
cout<<"Enter your Per: ";
cin>>Per;

student A1;                            //student is a class,A1 is an object

A1.addStudent(Roll,Marks,Per);       //in "A1" object, calling addstudent function
A1.SetDisplay();                    // in "A1" object, calling SetDisplay function




}
