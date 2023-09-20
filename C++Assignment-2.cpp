            C++ Assignments 2 | Week1 
// Q.no :-1.Find the output for this code. Let input:- 2 3 6 
#include <iostream> 
using namespace std; 
int main() 
{ 
 int x; 
 cout << "Enter first number\n"; 
 cin >> x; // user will give ‘x’ a value. 
 int y, m; 
 cout << "Enter second number and value for taking modulus\n"; 
 cin >> y >> m; // user will give ‘y’ a value. 
 int Z = (x * y) % m; 
 cout << "Output is: " << Z; 
} 
Solution:- 0

// Q.no 2.Find the output for this code. Let input:- 3 2 
#include <iostream> 
using namespace std; 
int main() 
{ 
 int x; 
 cout<<"Enter first number\n"; 
 cin>>x; // user will give 'x' a value. 
 int y; 
 cout<<"Enter second number\n"; 
 cin>>y; // user will give 'y' a value. 
 cout<<(x!=y)<<" "<<(x>=y); 
} 
Solution:-1 1

// Q.no 3.Find the output for this code. Let input:- 2 3
#include <iostream> 
using namespace std; 
int main() 
{ 
 int x,y; 
 cin>>x>>y; 
 x+=y; 
 x-=y; 
 x%=y; 
 cout<<x; 
} 
Solution:- 2

// Q.no 4.WAP for finding the volume of the cylinder by taking radius and height as input. Solution:-
#include<iostream>
using namespace std;
int main(){
cout<<"Enter the radius :";
int radius;
double volume;
cin>>radius;
cout<<"Enter the Height :";
int height;
cin>>height;
volume=3.14*height*radius*radius;
cout<<"Volume of Cylinder is "<<volume<<endl;
return 0;
}

// Q.no 5.WAP to find the difference between ASCII of two characters ,take them as input . 


#include<iostream>
using namespace std;
int main(){
char ch1,ch2;
cout<<"Enter the character :"<<endl;
cin>>ch1>>ch2;
cout<<"Differences is :"<<ch1-ch2<<endl;
}


// Q.no 6.Find the output of the below code 
#include <iostream> 
using namespace std; 
int main() 
{ 
 int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ; 
 cout<<i; 
} 
Solution:- 49
