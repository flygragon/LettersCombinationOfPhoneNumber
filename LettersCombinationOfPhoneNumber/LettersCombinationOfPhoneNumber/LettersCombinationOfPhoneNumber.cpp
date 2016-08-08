// LettersCombinationOfPhoneNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"LettersCombinationOfPhoneNumber.h"
using namespace std;

int main()
{
	string PhoneNum;
	cin >> PhoneNum;
	LetterGroupOfNums L;
	vector<string> NumLetter(L.letterCombinations(PhoneNum));
	for (int i = 0, len = NumLetter.size(); i < len; i++)
		cout << NumLetter[i] << " ";
	cout << endl;
	exit(0);
    return 0;
}

