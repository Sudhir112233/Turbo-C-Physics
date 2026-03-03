#include<fstream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
#include<iostream.h>
ofstream output ("gfourier.txt");
int main()
{
int T,a,n,t,i,N;
float w,W,F,pi=3.142,f;
cout<<"\FOURIER SERIES"<<endl;
cout<<" enter the value of T,a,n and t"<<endl;
cin>>T>>a>>n>>t;
w=(2*pi)/T;
W=w*i;
cin>>f>>a>>N;
f=f+(sin(w*N))/N;
F=(4*a*f)/pi;
cout<<"Print the values of i and F"<<endl;
return(0);
}