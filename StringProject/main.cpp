#include "string_.h"
#include <string>
using namespace std;
void main() 
{
	string_ s1("Hello world");
	string_ s2(" Glad to see you!");
	s1.print();
	s2 += s1;
	s2.print();
	system("pause");	
}