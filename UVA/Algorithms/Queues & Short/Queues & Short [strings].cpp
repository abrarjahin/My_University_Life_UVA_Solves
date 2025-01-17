//To create a queue of strings

#include <deque>                                                       
#include <string> // added so that we can use strings
#include <algorithm>                                            
#include <iostream>                                                        
using namespace std;                                                    
                                                                       
int main()                                                                 
{                                                             
	deque<string> Q;       // changed

	Q.push_back("standard");           
	Q.push_back("template");                                                        
	Q.push_back("library");     

	for(int i=0;i<Q.size(); i++)
	{
		cout<<Q[i];			//cout<<Q[i].value; is ERROR cause hare value must be class, union or structure type
		cout << " ";
	}
	cout <<endl;

	// Now let's sort!          
	sort(Q.begin(), Q.end());
	// sort uses the default sorting criterium for strings - alphabetical

	for(int i=0;i<Q.size(); i++)
	{
		cout<<Q[i];			//cout<<Q[i].value; is ERROR cause hare value must be class, union or structure type
		cout << " ";
	}
	cout <<endl;
	return 0;
}
