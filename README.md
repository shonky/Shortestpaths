Shortestpaths
=============
I was not sure how to go about the input of the graphs, so i just have the source code with no driver program. This is how i would imagine the main to be:

int main()
{
	Dijkstras d;
	int V=9;
	int **graph;
	graph[V][V]={//input of graphp}
	
	d.dijstra(graph,0);
	return 0;
}

