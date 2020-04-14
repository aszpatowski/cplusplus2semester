#include <iostream>


class Zespolona
{
    friend std::ostream& operator << (std::ostream &F , Zespolona const&arg);
    friend std::istream& operator >> (std::istream &F , Zespolona &arg);
    private:
    double real, imag;
    public:
    Zespolona(double r = 0, double i = 0)
    {
        real =r;
        imag =i;
    }

    Zespolona operator + (Zespolona const &arg)
    {
        Zespolona back;
        back.real = real + arg.real;
        back.imag = imag + arg.imag;
        return back;
    }
    Zespolona operator - (Zespolona const &arg)
    {
        Zespolona back;
        back.real = real - arg.real;
        back.imag = imag - arg.imag;
        return back;
    }
    Zespolona operator * (Zespolona const &arg)
    {
        Zespolona back;
        back.real = real*arg.real - imag*arg.imag;
        back.imag = real*arg.imag + imag*arg.real;
        return back;
    }
    Zespolona operator / (Zespolona const &arg)
    {
        if(arg.real!=0 || arg.imag!=0)
        {
            Zespolona back;
            back.real = (real*arg.real + imag*arg.imag)/(arg.real*arg.real + arg.imag*arg.imag);
            back.imag = (imag*arg.real - real*arg.imag)/(arg.real*arg.real + arg.imag*arg.imag);
            return back;
        }
        else
        {
            throw std::runtime_error("Error: Attempted to divide by Zero! \n");
        }
    }
};  
std::ostream& operator << (std::ostream & F, Zespolona const& arg)
{
        return F << arg.real << " + " << arg.imag<<"i"; 
}
std::istream& operator >> (std::istream & F, Zespolona &arg)
{
        std::cout<<"Real: ";
        F >> arg.real;
        std::cout<<"Imag: ";
        F >> arg.imag;
        return F;
}