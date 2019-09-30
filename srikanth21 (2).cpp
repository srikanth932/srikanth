#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("FIRST.TXT");
	ofstream fout;
	fout.open("SECOND.TXT");
	string word;
	
	if (fin.is_open())
	{
		
	    while(!fin.eof()) {
		
		
		fin >> word;
	    cout << word <<endl;
		if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
		fout<<word<<" ";
	}
	}
	else {
		cout <<"error";
	}
	fin.close();
	fout.close();
	
	return 0;
}
