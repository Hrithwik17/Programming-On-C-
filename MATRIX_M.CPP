#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10];
int i,j,m,n,p,q,k;
clrscr();
cout<<"Enter the order of first matrix\n";
cin>>m>>n;
cout<<"Enter the Elements of first matrix \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}

cout<<"\nEnter the order of second matrix\n";
cin>>p>>q;
cout<<"Enter the Elements of second matrix\n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cin>>b[i][j];
}
}
if(n==p)
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
{
c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
}
}
}
cout<<"The Resultant Matrix is:\n";;
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<q;j++)
{
cout<<c[i][j]<<"\t";
}
}
}
else
{
cout<<"The Matrix multiplication is not possible\\n";
}
getch();
}