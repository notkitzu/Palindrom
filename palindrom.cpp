#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


	class sprawdz
	{
    	ifstream plik1;
    	ofstream plik2;
		public:
        sprawdz();
        ~sprawdz();
	};

	bool isPalindrome(string s)
	{
	    int back = s.length()-1; 
	        bool palindrome = true; 
	        	for (int i=0; i<s.length()/2 && palindrome; i++) 
	                if (s[i] != s[back--]) 
	                    palindrome = false;
	                       
	        return palindrome;
	}

	string word;
	sprawdz::sprawdz()
	{ 
	    plik2.open("sprawdz.txt");
    	plik1.open("wprowadz.txt");

     	if(plik1.good())  
        while(!plik1.eof())  
        {
            getline(plik1,word);  
            cout<<word<<"\n";
                   
            string s(word), slowo, polacz("");
			stringstream ss(s);
			while(ss >> slowo) 
			polacz += slowo; 
        	if(isPalindrome(polacz)==1)
			{
				plik2<<word<<" jest palindromem";
			}
			else
			{
				plik2<<word<<" nie jest palindromem";
			}
        }
	}
	sprawdz::~sprawdz()
	{ 
	    plik1.close();
	    plik2.close();
	}

int main(int argc, char** argv)
{
	sprawdz x;
} 
