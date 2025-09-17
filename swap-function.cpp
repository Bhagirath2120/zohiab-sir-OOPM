#include<iostream>
using namespace std;
void swap(int a, int b)
{
int temp=a;
a=b;
b=temp;


}
int main(){



    int a=3,b=4;
    swap(a,b);// swap(3,4)
    cout<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;
    
}