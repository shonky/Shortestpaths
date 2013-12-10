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

Dijkstras::Dijkstras()
{
        vertSize=0;
        min=INT_MAX;
        min_index=-1;
}

//returns the index of the minimum
int Dijkstras::minDistance()
{
        //int min=INT_MAX;
        //int min_index=-1;
        for(int i=0;i<vertSize;i++)
                if(shortestSet[i]=false && distance[i]<=min)
                {
                        min=distance[i];
                        min_index=i;
                }
        return min_index;
}
