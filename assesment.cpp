#include <iostream>
using namespace std;
class project
{
public:
    void Fibonacci_Series()
    {
    int n1=0,n2=1,n3,i,number;
       cout<<"Enter the number of elements: ";
       cin>>number;
       cout<<n1<<" "<<n2<<" "; //printing 0 and 1
       for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed
      {
        n3=n1+n2;
     cout<<n3<<" ";
        n1=n2;
        n2=n3;
      }
   return 0;
    }
    void prime_number()
    {
        int n, i, m=0, flag=0;
  cout << "Enter the Number to check Prime: ";
  cin >> n;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"Number is not Prime."<<endl;
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "Number is Prime."<<endl;
  return 0;
    }
    void Palindrome()
    {
         int n,r,sum=0,temp;
  cout<<"Enter the Number=";
  cin>>n;
 temp=n;
 while(n>0)
{
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
}
if(temp==sum)
cout<<"Number is Palindrome.";
else
cout<<"Number is not Palindrome.";
  return 0;
    }
    void factorial()
    {
   int i,fact=1,number;
  cout<<"Enter any Number: ";
 cin>>number;
  for(i=1;i<=number;i++){
      fact=fact*i;
  }
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
  return 0;
    }
    void Armstrong_Number()
    {
    int n,r,sum=0,temp;
    cout<<"Enter the Number=  ";
    cin>>n;
       temp=n;
    while(n>0)
   {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
    }
    if(temp==sum)
    cout<<"Armstrong Number."<<endl;
else
    cout<<"Not Armstrong Number."<<endl;
    return 0;
}
void sum_of_digits()
{
int n,sum=0,m;
cout<<"Enter a number: ";
cin>>n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
cout<<"Sum is= "<<sum<<endl;
return 0;
}
void Reversed_Number()
{
int n, reverse=0, rem;
cout<<"Enter a number: ";
cin>>n;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
 cout<<"Reversed Number: "<<reverse<<endl;
return 0;
}
void swapp_numbers()
{
int a=5, b=10;
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
a=a*b; //a=50 (5*10)
b=a/b; //b=5 (50/10)
a=a/b; //a=10 (50/5)
cout<<"After swap a= "<<a<<" b= "<<b<<endl;
return 0;
}
void matrix_multiplication()
 {
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
cout<<"enter the number of row=";
cin>>r;
cout<<"enter the number of column=";
cin>>c;
cout<<"enter the first matrix element=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
cout<<"enter the second matrix element=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>b[i][j];
}
}
cout<<"multiply of the matrix=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<mul[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
void convert_numtochar()
{
    long int n,sum=0,r;
cout<<"Enter the Number= ";
cin>>n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=sum;
while(n>0)
{
r=n%10;
switch(r)
{
case 1:
cout<<"one ";
break;
case 2:
cout<<"two ";
break;
case 3:
cout<<"three ";
break;
case 4:
cout<<"four ";
break;
case 5:
cout<<"five ";
break;
case 6:
cout<<"six ";
break;
case 7:
cout<<"seven ";
break;
case 8:
cout<<"eight ";
break;
case 9:
cout<<"nine ";
break;
case 0:
cout<<"zero ";
break;
default:
cout<<"tttt ";
break;
}
n=n/10;
}
}
void alphabet_triangle()
    {
 char ch='A';
    int i, j, k, m;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<ch++;
            ch--;
        for(m=1;m<i;m++)
            cout<<--ch;
        cout<<"\n";
        ch='A';
    }
return 0;
}
void number_triangle()
{
int i,j,k,l,n;
cout<<"Enter the Range=";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
for(l=i-1;l>=1;l--)
{
cout<<l;
}
cout<<"\n";
}
return 0;
}
void fibonacci triangle()
{
  int a=0,b=1,i,c,n,j;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        a=0;
        b=1;
        cout<<b<<"\t";
        for(j=1; j<i; j++)
        {
            c=a+b;
          cout<<c<<"\t";
            a=b;
            b=c;
        }
        cout<<"\n";
    }
return 0;
}

};

