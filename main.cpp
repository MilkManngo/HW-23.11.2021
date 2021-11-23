#include <iostream>
#include <bits/stdc++.h>
using namespace std;


float harmonicMean(float arr[], int n)
{

    float sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + (float)1 / arr[i];

    return (float)n/sum;
}


int main()
{
    float arr[] = { 13.5, 14.5, 14.8, 15.2, 17 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << harmonicMean(arr, n);
    return 0;
} 



int gcd(int a, int b)
{
if (a == 0)
return b;
if (b == 0)
return a;
if (a == b)
return a;

if (a > b)
return gcd(a-b, b);
return gcd(a, b-a);
}
int main()
{
int a,b;
cout<<"Enter two integers : ";
cin>>a>>b;
cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
return 0;
}



unsigned int GCD(unsigned int a,unsigned int b, unsigned int c){
    for(int r = min(a, min(b,c)) ; true ; --r)
        if( ! (a%r| b%r| c%r) ) return r;
}

int main()
{
int a,b,c;
cout<<"Enter three integers : ";
cin>>a>>b>>c;
cout<<"GCD of "<<a<<" and "<<b<<" and "<<c<<" is "<<GCD;
return 0;
}



