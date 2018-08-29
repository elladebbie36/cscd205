# include<iostream>
using namespace std;
   int main()


[

int value;

int a, i;
bool isPrime = true;

cout<< "Enter an integer value:";
cin>> a;

for(i = 2; i <= a/2; ++1
{
  
      if(a % i ==0)
      {
      
           isPrime = false;

           break;
      }
}
 
if (isPrime)
     cout <<"This is a prime number";
else
     cout <<"This is not a prime number";


return 0;

}

