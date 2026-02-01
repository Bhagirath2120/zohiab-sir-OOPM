// add value using different data-type

#include<iostream>
#include<conio.h>
using namespace std;

int add(int a,int b)
{cout<<"int version"<<endl;
 return a+b;
}
float add(float a,int b){
  cout<<"float version 1 "<<endl;
  return a+b;

}
float add(int a,float b){
    cout<<"float version 2"<<endl;
    return a+b;
}
double add(double a,double b){
    cout<<" double version"<<endl;
    return a+b;
}


int main(){

//int a; float b;

cout<<"Addition: "<<  add(5.55f,5);

    getch();
}