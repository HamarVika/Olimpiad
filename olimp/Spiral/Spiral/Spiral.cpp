// Spiral.cpp : Defines the entry point for the console application.
//����� ��� �� ����� � ����� ������� m*n. ��������� ������� ��������

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, m;
	ofstream fout( "OUTPUT.TXT" );   //result will be here
	ifstream infile("INPUT.TXT");	//input data here
	infile>>n>>m;
	if ( n < 0 || m < 0 )
		cout<<"Bad numbers!";
	else
	{
		int min = ( m < n ? m : n );   //save the minimal number
		int res=2*( min - 1 );		
		fout<<res;
		cout<<" Result is in file 'OUTPUT.TXT' ";
	}
	system("pause");
	return 0;
}

