#include<map>
#include<string>
#include<list>
#include<thread>

#include "StaticEvaluator.h"
#include "MoveSorter.h"
#include "TranpositionTable.h"

using namespace std;

class Engine{

    string position;
    StaticEvaluator staticEvaluator;
    MoveSorter moveSorter;
    thread_local mythreads[100];

    private:
        int evaluate(string);
        string minimax();
        string minimaxTake();

};
