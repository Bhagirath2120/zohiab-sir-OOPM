#include<iostream>
using namespace std;


int largest(int x,int y,int z){
if(x>y && x>z){
           return x;
}
            else
                if(y<x && y>z){
            return y;}

        else{
            return z; 
        }          
    
    }




int largest(int x, int y)
{
if(x>y) return x;
else return y;
}


int main(){

int a = 17, b = 8,c = 10;
cout<<"The largest number is: "<< largest(a,b,c)<<endl;
cout<<"The largest numbe among 2 is: "<< largest(b,c)<<endl;



}