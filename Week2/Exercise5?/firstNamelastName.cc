#include <iostream>
#include <string>
using namespace std;
    
int main() {
    string lastName;
    string firstName;
	cout << "First Name: ";
    getline(cin,firstName);
    cout << "Last Name: ";
    getline(cin,lastName);
    
    if(firstName.empty())
    cout << "zet er dan wat neer lul";
    
    else
    cout << firstName << " is een hoerejong" << '\n' 
    << lastName << " is een hoeeerreeejong";
      
}