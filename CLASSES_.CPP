#include<iostream.h>
#include<conio.h>
class add
{
private:
int a,b,c;
public:
void input_data()
{
cout<<"Enter the Values of a and b \n";
cin>>a>>b;
}
void find_data()
{
c=a+b;
}
void output_data()
{
cout<<"The result is: "<<c;
}
};
void main()
{
add a;
clrscr();
a.input_data();
a.find_data();
a.output_data();
getch();
}