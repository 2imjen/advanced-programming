#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c, dt;
    cin >> a >> b >> c;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0) cout<<"Pt vo so nghiem";
            else cout<<"pt vo nghiem";
        }
        else cout<<"Phuong trinh co nghiem la x = " <<-c/b;
    }
    else
    {
        dt=b*b-4*a*c;
        if(dt<0) cout<<"Pt vo nghiem";
        else if(dt==0) cout<<"Pt co nghiem kep x1=x2= "<<-b/(2*a);
        else if(dt>0)
        {
            double x1,x2;
            x1= (-b+sqrt(dt))/2/a;
            x2= (-b-sqrt(dt))/2/a;
            cout<<"Pt co 2 nghiem la x1= "<< x1<< "x2= "<<x2;
        }
    }
    return 0;

}