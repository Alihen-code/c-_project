#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
#include "buck.h"

main(){
	student s;
	teacher t;
	s.setData();
	t.setData();
	s.getData();
	t.getData();
	getch();
	return 0;
}