#include<iostream>
using namespace std;
int main()
{
 int x[5]={100,2,3,4,5};
 for(int i=0; i<5;i++)
 cout << x[i] <<" " ;
 char name[50]="my name";
 // print name using loops
 cout << "enter name\n";
 cin >> name;
 for(int i=0;i<50;i++)
 cout << name[i];

 // print name using loops
 return 0;
}
