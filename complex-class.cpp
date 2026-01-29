#include<iostream>
using namespace std;



class complex{
double real, imag;
public:
complex ()// default constructor
{
    real =0;
    imag = 0;
}
complex(double r, double imag)
{
this->  real =real;// left one data membre
this-> imag =imag;// right one is local var
}
complex(const complex &c)  //copy constructor with read only object
{
    real = c. real;
    imag = c. imag;
}
complex add(complex obj)
{
    complex ans;
    ans.real = real + obj.real;
    ans.imag = imag + obj.imag;
    return ans;
}

complex
{
    complex ans;
    ans.real = real+ obj.real;
    ans.imag = imag + obj.real;
}


complex sub (complex obj)
{
    complex ans;
    ans.real = real- obj.real;
    ans.imag = imag - obj.real;
}
    
        complex multiply(complex obj)
    {
        complex ans;    
        ans.real = real*obj.real - imag*obj.imag;
        ans.real = real*obj.imag + imag*obj.real;
        return ans;
    }
    complex  comjugate()
    {
       complex comjugate()

    }

    complex divide(complex obj) //(a+ib) =c1 * (x-iy)=c2
{
    complex ans;
    double deno = real*obj.real + imag*obj.imag;
    obj = obj.conjugate();
    ans = (*this).multiply(obj);
    ans.real /=deno;
    ans.imag /=deno;
    return ans;

}

    void show()
{
  cout << real << "+"  << imag << "i" << endl;
}

};
// 
#include<iostream>
using namespace std;

class complex {
    double real, imag;
public:
    complex() { // default constructor
        real = 0;
        imag = 0;
    }

    complex(double r, double i) { // parameterized constructor
        this->real = r;
        this->imag = i;
    }

    complex(const complex &c) { // copy constructor
        real = c.real;
        imag = c.imag;
    }

    complex add(complex obj) {
        complex ans;
        ans.real = real + obj.real;
        ans.imag = imag + obj.imag;
        return ans;
    }

    complex sub(complex obj) {
        complex ans;
        ans.real = real - obj.real;
        ans.imag = imag - obj.imag;
        return ans;
    }

    complex multiply(complex obj) {
        complex ans;
        ans.real = real * obj.real - imag * obj.imag;
        ans.imag = real * obj.imag + imag * obj.real;
        return ans;
    }

    complex conjugate() {
        complex ans(*this);
        ans.imag = -ans.imag;
        return ans;
    }

    complex divide(complex obj) {
        complex ans;
        double deno = obj.real * obj.real + obj.imag * obj.imag;
        complex conj = obj.conjugate();
        ans = (*this).multiply(conj);
        ans.real /= deno;
        ans.imag /= deno;
        return ans;
    }

    void show() {
        cout << real;
        if(imag >= 0) cout << "+";
        cout << imag << "i" << endl;
    }
};

int main() {
    complex c1(2, 3), c2(4, 5);

    cout << "Multiplication: ";
    complex result = c1.multiply(c2);
    result.show();

    cout << "Addition: ";
    result = c1.add(c2);
    result.show();

    cout << "Subtraction: ";
    result = c1.sub(c2);
    result.show();

    cout << "Division: ";
    result = c1.divide(c2);
    result.show();

    cout << "Conjugate of c1: ";
    result = c1.conjugate();
    result.show();

    return 0;
}



