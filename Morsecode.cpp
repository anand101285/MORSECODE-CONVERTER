
#include"pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

string Morsecode_trans(char x)
{
	switch (x)
	{
		case 'A':
		    {
               return ".-";
		    }
		case 'B':
		   {
               return "-...";
		   }
		case 'C':
		{
			return "-.-.";
		}
		case 'D':
		{
			return "-..";
		}
		case 'E':
		{
			return ".";
		}
		case 'F':
		{
			return "..-.";
		}
		case 'G':
		{
			return "--.";
		}
		case 'H':
		{
			return "....";
		}
		case 'I':
		{
			return "..";
		}
		case 'J':
		{
			return ".---";
		}
		case 'K':
		{
			return "-.-";
		}
		case 'L':
		{
			return ".-..";
		}
		case 'M':
		{
			return "--";
		}
		case 'N':
		{
			return "-.";
		}
		case 'O':
		{
			return "---";
		}
		case 'P':
		{
			return ".--.";
		}
		case 'Q':
		{
			return "--.-";
		}
		case 'R':
		{
			return ".-.";
		}
		case 'S':
		{
			return "...";
		}
		case 'T':
		{
			return "-";
		}
		case 'U':
		{
			return "..--";
		}
		case 'V':
		{
			return "...-";
		}
		case 'W':
		{
			return ".--";
		}
		case 'X':
		{
			return "-..-";
		}
		case 'Y':
		{
			return "-.--";
		}
		case 'Z':
		{
			return "--.";
		}
		case ' ':
		{
			return" ";
		}
	}


}
void MorseEncode(string s)
{
    cout<<"Hello USER"<<endl;
    cout<<"Enter Any word TO convert it to MorseCODE"<<endl;
	cin>>s;
	const char *cs = s.c_str();
	for (int i = 0; i <= strlen(cs); i++)
	{
		if (s[i] >= 97 && s[i]<=122)
		{
			s[i] = s[i] - 32;
		}
	}
    string Morsecode_trans(char);
    cout<<"Your Word :"<<s<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Morse CODE :  ";

	for (int i = 0; s[i]; i++)
	{
		cout << Morsecode_trans(s[i]);
	}
	return;
}

int main()
{
	cout << "         ____          ____   ___            ___ " << endl;
	cout << "|      | |     |      |      |   | |\\    /| |    " << endl;
	cout << "|  /\\  | |___  |      |      |   | | \\  / | |___ " << endl;
	cout << "| /  \\ | |     |      |      |   | |  \\/  | |    " << endl;
	cout << "|/    \\| |___  |_____ |____  |___| |      | |___ " << endl;
	cout << endl;
	cout << endl;
Beginning:
	string s;

	MorseEncode(s);
	cout << endl;

	cout << "Do You want to Run program Again" << endl;
	char g;
	cin >> g;
	if (g == 'Y' || g == 'y')
	{
		system("cls");
		goto Beginning;
	}
}
