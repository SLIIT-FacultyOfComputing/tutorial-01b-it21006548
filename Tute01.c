/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
using namespace std;
int main() {
  int w,x,y,z;
  cout<<"enter number for x"<<endl;
  cin>>x;
  cout<<"Enter number for y"<<endl;
  cin>>y;

  w=x+y;
  cout<<"Sum is:"<<w<<endl;
  z=(x+y)/2;
  cou<<"Average is"<<z<<endl;
  return 0;
}

