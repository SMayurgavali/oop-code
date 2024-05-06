#include<iostream>
using namespace std;
class complex
{
    private:
        int real, imag;

    public:
        complex(int r = 0, int i = 0) : real(r), imag(i) {}

        complex operator+(complex const& obj)
        {
            complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        complex operator-(complex const& obj)
        {
            complex res;
            res.real = real - obj.real;
            res.imag = imag - obj.imag;
            return res;
        }

        void display()
        {
            cout << real << "+" << imag << "i" << "\n";
            cout << real << "-" << imag << "i" << "\n";
        }
        void inputComplex()
        {
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> imag;
        }
};

int main()
{
    complex c1, c2;

    cout << "Enter data for complex number c1:" << endl;
    c1.inputComplex();

    cout << "Enter data for complex number c2:" << endl;
    c2.inputComplex();

    complex c3 = c1 + c2;
    complex c4 = c1 - c2;

    cout << "Addition:" << endl;
    c3.display();

    cout << "Subtraction:" << endl;
    c4.display();

    return 0;
}

