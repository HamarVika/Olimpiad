// Sirnyky.cpp : Defines the entry point for the console application.

//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	long res=0;
	unsigned mod;
	char ch;
	ofstream fout( "OUTPUT.TXT" );   //here will be result
	ifstream fin("INPUT.TXT");	// input data
	
	while( fin.get(ch) )        //read from file very long number
	{
		res=res+(ch-48);     //calculate sum of his numbers 
	}
	
	mod = res % 3;			//if sum can be divided into 3 - > number can
	if (mod == 0)
		fout<<2;             //if mod == 0 - second player wins
	else
		fout<<1<<" "<<mod;    // else - first
	
	system("pause");
	return 0;
}

