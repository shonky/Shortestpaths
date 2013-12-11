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

int Dijkstras::printSolution()
{
        cout<<"Vertex Distance from source\n";
        for(int i=0;i<vertSize;i++)
                cout<<i<<":"<<" "<<distance[i];
}

int Dijkstras::getVertSize()
{
        return vertSize;
}

void Dijkstras::dijkstra(int** graph,int src)
{
        //Find shortest path for all verticies
        for(int i=0;i<=9;i++)
        {
                distance[i]=INT_MAX;
                shortestSet[i]=false;
        }
         distance[src]=0;
        minDistance();
        for(int count=0;count<9-1;count++)
        {
                int u=min_index;
                shortestSet[u]=true;

                for(int v=0;v<9;v++)
                {
                        if((distance[u]+graph[u][v]<distance[v])&&(distance[u]!=INT_MAX)&&(!shortestSet[v]))
                        {
                                distance[v]=distance[v]+graph[v][u];

                        }
                printSolution();
                }
        }

}