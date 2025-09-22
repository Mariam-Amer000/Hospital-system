#include <iostream>
using namespace std;
#include "Person.h"
#include "Employee.h"
#include "Doctor.h"
int main()
{
	Person p1(" mariam   mohamed al ali ", -10, 1, 'F');
	p1.display();
	Employee e1("mohaed ali ali amer", 20, 2, 'M', 200);
	e1.display();
	Doctor d1("Roaa mohaed ahmed mohamed", 20, 3, 'F', 50000, "eyes", 10);
	d1.display();
}
//ÚÇíÒå ÇÚãá İíßÊæÑ İíåÇ ßá ÇáÇÑŞÇã ÇáŞæãíå ÚáÔÇä áãÇ íÏÎá íÚãá ÊÔß ÚÇáíåÇ İí ÇáÚãæã