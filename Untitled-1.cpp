#include <iostream>
#include<string>
using namespace std;

void displaymenu()
{ 
cout<<"===================================================== \n";
cout<<" \t\tMENU \t \n ";
cout<<"===================================================== \n";
cout<<" 1.Decimal Conversion\n";
cout<<" 2.Binary Conversion\n";
cout<<" 3.Octal Conversion \n";
cout<<" 4.Hexa Decimal Conversion \n";
cout<<" 5.Exit \n";
}
//void statements below

 
int main()
{ 
 
string st[20];
int itemcount = 0;
 

 
displaymenu(); 
int yourchoice;
string confirm;
do
{ cout<<"Enter your choice from 1 - 5: ";
cin>>yourchoice;
switch (yourchoice)
// case statements below//

cout<<"Press y or Y to continue:";
cin>>confirm;
} while (confirm == "y" || confirm == "Y");
return 0;
}