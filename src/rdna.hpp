#include <iostream>
#include <string>
#include <random>
using namespace std;
string ranDNA (int seed, string bases, int n)
{
	std::random_device rd;
	std::mt19937 eng(rd(seed));

	
	uniform_int_distrburtion<int> un{1,n};
	for(i=0; i < n ; n++)
	{
		cout<<un(eng)<<" ";
		bases = bases+bases;
	}	
	return;
}
