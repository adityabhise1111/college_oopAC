//Adityabhise setc13
#include<iostream>
using namespace std;

class complex{;
    private:
    int real;
    int imag;

    public:
    //setter
    void setcmplx(int r, int i){
        real = r;
        imag = i;
    }
    //getter
    void getcmplx(){
        cout<<real<<" + "<<"i"<<imag<<endl;
    }
    //addition
    void addcmplx(complex c1, complex c2){
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
        cout<<real<<" + "<<"i"<<imag<<endl;

    }

    //subtraction
    void subcmplx(complex c1, complex c2){
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
        cout<<real<<" - "<<"i"<<imag<<endl;
    }

    //multiplication
    void mulcmplx(complex c1, complex c2){
        real = c1.real * c2.real - c1.imag * c2.imag;
        imag = c1.real * c2.imag + c1.imag * c2.real;
        cout<<real<<" + "<<"i"<<imag<<endl;
    }

    //division
    void divcmplx(complex c1, complex c2){
        int denom = c2.real * c2.real + c2.imag * c2.imag;
        real = (c1.real * c2.real + c1.imag * c2.imag) / denom;
        imag = (c1.imag * c2.real - c1.real * c2.imag) / denom;
        cout<<real<<" + "<<"i"<<imag<<endl;
    }

};

int main(){
    complex c1,c2,c3,c4,c5,c6;
    int a,b,c,d;
    cout << "Enter the real and imaginary part of the first complex number: ";
    cin >> a >> b;
    cout<<endl;
    
    cout << "Enter the real and imaginary part of the second complex number: ";
    cin >> c >> d;

    c1.setcmplx(a,b);
    c2.setcmplx(c,d);
    c3.addcmplx(c1,c2);
    c4.subcmplx(c1,c2);
    c5.mulcmplx(c1,c2);
    c6.divcmplx(c1,c2);

    cout<<"c1 = ";
    c1.getcmplx();
    cout<<"c2 = ";
    c2.getcmplx();
    cout<<"c3 = ";
    c3.getcmplx();
    cout<<"c4 = ";
    c4.getcmplx();
    cout<<"c5 = ";
    c5.getcmplx();
    cout<<"c6 = ";
    c6.getcmplx();
    
    
    return 0;
}