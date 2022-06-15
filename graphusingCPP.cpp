#include<bits/stdc++.h>
using namespace std;
void graphEdge(vector<int> Adjacent[], int m, int n)
{
	Adjacent[m].push_back(n);
	Adjacent[n].push_back(m);
}
void Graphfn(int m, vector<int> Adjacent[],vector<bool> &Visit)
{
	Visit[m] = true;
	cout << m << " ";
	for (int p = 0; p < Adjacent[m].size(); p++)
		if (Visit[Adjacent[m][p]]== false)
			Graphfn(Adjacent[m][p], Adjacent, Visit);
}
void Graph_g(vector<int> Adjacent[], int x)
{
	vector<bool> Visit(x, false);
	for (int m = 0; m < x; m++)
		if (Visit[m] == false)
			Graphfn(m, Adjacent, Visit);
}
int main()
{
	int x = 6;
	vector<int> Adjacent[x];
	graphEdge(Adjacent, 0, 1);
	graphEdge(Adjacent, 0, 5);
	graphEdge(Adjacent, 1, 1);
	graphEdge(Adjacent, 1, 2);
	graphEdge(Adjacent, 1, 5);
	graphEdge(Adjacent, 2, 3);
	graphEdge(Adjacent, 3, 4);
	Graph_g(Adjacent, x);
	return 0;
}

