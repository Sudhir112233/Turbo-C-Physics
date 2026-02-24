#include<iostream.h>
#include<math.h>
#include<fstream.h>
int main()
{
float a,b,c,x1,x2,D;
cout<<"enter coefficient a,b,&c";
cin>>a>>b>>c;
D=b*b-(4*a*c);
if(D>0)
{
cout<<"root are real and directed:"<<x1<<"and"<<x2<<endl;
cin>>x1>>x2;
x1=(-b + sqrt(D))/(2*a);
x2=(-b - sqrt(D))/(2*a);
}
else if(D==0)
{
x1=-b/(2*a);
cout<<"root are real and equal:"<<x1<<endl;
}
else
{
x1=(-b+sqrt(D))/(2*a);
x2=(-b-sqrt(D))/(2*a);
cout<<"print the root are imaginary";
}
return(0);
}






