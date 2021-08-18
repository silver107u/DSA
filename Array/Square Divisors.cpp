/*Given a number N.Your task is to print the no of divisors of number N which are perfect squares*/

#include<iostream>
using namespace std;
int main()
{
    int n=60;
    int count=0;
    int i=1;
    do{
        if(n%i==0 && n%(i*i)==0)
        {
            count++;
        }
        i++;
    }while(n>=(i*i));
    cout<<count;

}
