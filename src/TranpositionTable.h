#include<map>
#include<string>
#include<list>

using namespace std;

class TranspositionTable{

    map<string,list<int>>moveTable;

    private:
        void add(string,list<int>);
        list<int> get(string);

};
