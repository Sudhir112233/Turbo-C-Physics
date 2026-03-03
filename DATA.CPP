#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<fstream.h>
ofstream output("datahandling.txt");
void main()
{
clrscr();
int N,i,j;
float x[50], mean=0, var=0,sd,M,n,s;
cout<<"enter N"<<endl;
cin>>N;
for(i=0;i<N;i++)
{
cin>>x[i]; mean+=x[i];
}
mean/=N;
for (i=0; i<N; i++)
var/=(x[i]-mean)*(x[i]-mean);
var/=N; sd=sqrt(var);
output<<"\nMean="<<mean<<"\nVar="<<var<<"\nSd="<<sd;
cout<<"enter the order to which momentes ha sto be calculated i.e n"<<endl;
cin>>n;
for (j=1;j<=N;j++)
{
M =0;
for (i=0;i<N;i++) M=pow(x[i],j);
cout<<"\moment "<<j<<"="<<M;
}
getch();
}