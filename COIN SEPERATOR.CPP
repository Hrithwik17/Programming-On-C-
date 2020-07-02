#include<iostream.h>
#include<conio.h>
void main()
{
int val,n5,n2,n1;
clrscr();
n5=n2=n1=0;
cout<<"Enter the value\n";
cin>>val;
if(val>=5)
{
n5=val/5;
val-=n5*5;
}
if(val>=2)
{
n2=val/2;
val-=n2*2;
}
if(val>=1)
{
n1=val;
}
cout<<"Five ="<<n5<<"\nTwo = "<<n2<<"\nOne ="<<n1;
getch();
}