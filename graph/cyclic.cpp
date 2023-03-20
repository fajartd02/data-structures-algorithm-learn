#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph {
	int V;
	list<int> *l;

public:
	Graph(int v) {
		V = v;
		l = new list<int>[V];
	}

	void addEdge(int x, int y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}

	bool dfs(int node, vector<bool> &visited, int parent) {
		visited[node] = true;

		for(auto nbr : l[node]) {
			if(!visited[node]) {
				bool containsACycle = dfs(nbr, visited, node);
				if(containsACycle) {
					return true;
				}
			} else if(nbr != parent) {
				return true;
			}
		}

		return false;
	}

	bool contains_cycle() {
		vector<bool> visited(V, false);
		return dfs(0, visited, -1);
	}

};

int main() {
	Graph g(7);
	g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
	cout << g.contains_cycle() << endl;
}