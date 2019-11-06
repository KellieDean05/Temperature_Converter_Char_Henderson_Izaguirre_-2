// This is a program to convert celsius to fahrenheit and fahrenheit to celsius char.
// Henderson,Izaguirre,Dr.T, 8-26-19
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
 // Declare and initialze the variables for celsius and fahrenheit.
     char decision = '\0' ;
     double celsius = 0.0;
     double fahrenheit = 0.0;
      //iomainp thing
    cout << fixed <<setprecision(3);
 while (decision != 'E')
{
  cout << "\nPlease enter 'C' for Celsius to Fahrenheit conversion and 'F' for Fahrenheit to Celsius conversion or 'E' to exit: " << endl;
  cin >> decision; 
  // convert celsius to fahrenheit.
 if (decision == 'C' )
 {
  cout << "\nYou have decided to convert to Celsius to Fahrenheit." << endl;
  cout << "\n Please Enter your Celsius temperature: " << endl;
  cin >> celsius; 
// formula for celsius to fahrenheit conversion.
  fahrenheit = (celsius * (9.0/5.0)) + 32.0;

  cout << "\nThis temperature converted to fahrenheit is: " << fahrenheit << " degrees fahrenheit. " << endl;  
 }
// convert fahrenheit to celsius.
 else if(decision == 'F')
 {
 cout << "\nYou have decided to convert Fahrenheit to Celsius." << endl;
  cout << "\n Please Enter your Fahrenheit temperature: " << endl;
  cin >> fahrenheit; 
// formula for fahrenheit to celsius.
  celsius = ((fahrenheit - 32) * 5.0/9.0);

  cout << "\nThis temperature converted to Celsius is: " << celsius << " degrees celsius. " << endl;   
 } 
 else if (decision != 'E' && decision != 'C' && decision != 'F')
 // Make the escape!
 {
 cout << "\nOnly 'C' or 'F' or 'E' can be used. Try again. " << endl;
 cin >> decision;
 } 
 else if (decision == 'E')
 {
   cout << "Byeeee!" << endl;
 }
}
  return 0;
}