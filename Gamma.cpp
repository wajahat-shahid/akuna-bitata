#include <iostream>

using namespace std;

void printBar()
{
	for (int i=0;i<9;i++)
	cout<<"*";
	
	cout<<endl;
	for (int i=0;i<9;i++)
{	
	if (i>2 && i<7)
	cout<<"*";
	else
	cout<<"-";
}
cout<<endl;
}

int main ()
{
	printBar();
	for (int i=0;i<5;i++)
		cout<<"I love Pakistan."<<endl;	
	printBar();
	bool doYouAgree;
	char opt;
	doYouAgree= true;
	cout<<"Pak Turk Friendship is ever-lasting (type y for yes and n for no): ";
	cin>>opt;
	if(opt=='y')
	doYouAgree=true;
	else
	doYouAgree=false;
	
	if(doYouAgree)
	cout<<"Bhai Nahana Parey gaa"<<endl;
	else
	cout<<"Khaire hi hia Cheetey"<<endl;
}
