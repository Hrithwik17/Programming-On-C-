#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,mid,low,high,i,found=0,loc=0;
clrscr();
char a[20][20],key[20];
cout<<"Enter the Number of names\n";
cin>>n;
cout<<"Enter the Names\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the name to Search of \n";
cin>>key;
low=0;high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(strcmp(a[mid],key)==0)
{
found=1;
break;
}
else if(strcmp(a[mid],key)<0)
{
low=mid+1;
}
else
high=mid-1;
}
loc=mid+1;
if(found==1)
cout<<"The name is found at location:"<<loc;
else
cout<<"Name is not found \n";
getch();
}
