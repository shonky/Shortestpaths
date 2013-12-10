#include<iostream>
#include<climits>
using namespace std;

class Dijkstras
{
public:
        Dijkstras();
        int minDistance();
        int printSolution();
        void dijkstra(int**,int);
        int getVertSize();
private:
        int* distance;
        bool* shortestSet;
        int min;
        int min_index;
        int vertSize;
};
