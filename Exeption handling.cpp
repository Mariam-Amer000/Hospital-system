#include<iostream>
#include<string>
using namespace std;
/*
* three main words
* try       catch        throw
* --> we use Exception handling to handel any error happen during ecxution of the program
*ÇáßæÏ Çáí åßÊÈ Ýíå ËÑæ áãÇ ÇÌí ÇÔÛáå ÍØå ÌæÇ ÊÑÇí 
* ÈÚÏíä ÇÚãá áíå ßÇÊÔ ÚáÔÇã ÇãÓß ÇáËÑæ Ïå ÌæÇ
* you can make more than one catch block for one try
*/
class printer
{
	stirng _name;
	int avaliavle_paper;
	public
		printer(string name, int paper) 
		:_name(name), avaliavle_paper(paper) {}
	void print(string txtdoc) 
	{
		int requierd_paper = txtdoc.length() / 10;
		if (requierd_paper > avaliavle_paper) 
			throw "No Paper";

		cout << "Printing...\n" << txtdoc << endl;
		avaliavle_paper -= requierd_paper;
	}
};
int main()
{
	printer my_printer("HP desktop 1234", 10);
	try 
	{
		my_printer.print("Halloe my name is mariam i am a software engineer");
		my_printer.print("Halloe my name is mariam i am a software engineer");
		my_printer.print("Halloe my name is mariam i am a software engineer");
	}
	catch (const char * txtexception)
	{
		cout << "Exceotion : " << txtexception << endl;
	}
	return 0;
}