//Default argument

#include<iostream>
#include<conio.h>
using namespace std;

int add(int a, int b,int c=0)
{cout<<"int version"<<endl;
 return a+b+c;
}

int main(){

//int a; float b;

cout<<"Addition: "<< add(5,5);

    getch();
}