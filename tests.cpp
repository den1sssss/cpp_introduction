#include <iostream>
using namespace std;
#include <map>

class A
{
	public :
bool isValid(string s) 
    {
        map<char,int> table;
        table.insert(make_pair('(',1));
        table.insert(make_pair(')',2));
        table.insert(make_pair('{',3));
        table.insert(make_pair('}',4));
        table.insert(make_pair('[',5));
        table.insert(make_pair(']',6));
        int first =0;
        int last = s.size()-1;
        if(s.length() == 1)
            return false;
        while(last - first >= 1)
        {
			cout << "kek"<< endl;
			cout << "first "<< first << "last " << last << endl;
			cout << "first sign " << table[s[first]]<< endl;
			cout << "sprava ot nego  " << table[s[first]+1]<< endl;
			cout << "last sign " <<table[s[last]]<< endl;
			cout << "sleva ot nego  " << table[s[last]-1]<< endl;
            if(table[s[first+1]] == table[s[first]])
			{
                first+=2;
				cout << "here1"<< endl;
			}
            else if(table[s[first]]==table[s[last]])
            {
                first++;
                last--;
				cout << "HERE2"<< endl;
            }
            else if(table[s[last]] == table[s[last]+1])
			{
                last-=2;
				cout << "hereeeeeeee3"<< endl;
			}
            else 
                return false;
        }
        return true;
    }
};
int main()
{
	A kek;
	std::string a="()";
    std::cout << kek.isValid("()[]") << std::endl;


}

