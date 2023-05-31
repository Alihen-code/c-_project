#include<iostream>
#include<conio.h>

using namespace std;
#include "buck.h"
student::student()
{
	number=0;
	name="";	
}
void student::setData()
{
	cout<<"\n\n ***set student data***";
	cout<<"\n\n Enter student number: ";
	cin>>number;
	cout<<"\n\n Enter student Name: ";
	cin>>name;
}

void student::getData()
{
	cout<<"\n\n ***Get student data***";
	cout<<"\n\n Student ID: "<<number;
	cout<<"\n\n Student Name: "<<name;
}

teacher::teacher()
{
	id=0;
	name="";
}
void teacher::setData()
{
	cout<<"\n\n ***set teacher data***";
	cout<<"\n\n Enter teacher ID: ";
	cin>>id;
	cout<<"\n\n Enter teacher Name: ";
	cin>>name;
}
void teacher::getData()
{
	cout<<"\n\n ***Get Teacher data***";
	cout<<"\n\n Teacher ID: "<<id;
	cout<<"\n\n Teacher Name: "<<name;
}