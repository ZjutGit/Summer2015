#include <string>
using namespace std;

class CFile
{
	public:
	CFile(){}
	~CFile(){}
	
	void print(string str) {printf(str.c_str());}
	void print2(string str);
};