// WAP to add two numbers using friend friend funcion

#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    friend complex sum(complex,complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.setdata((c1.a+c2.a),(c1.b+c2.b));
    return(c3);
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=sum(c1,c2);
    c3.showdata();
    return 0;
}   