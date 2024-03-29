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

	void addEdge(int i, int j, bool undir=true) {
		l[i].push_back(j);
		if(undir) {
			l[j].push_back(i);
		}
	}

	void printAdjList() {
		for(int i = 0; i < V; i++) {
			cout << i << "-->";
			for (auto node: l[i]) {
				cout << node << ", ";
			}
			cout << endl;
		}
	}

    void bfs(int source, int destination=-1) {
        queue<int> q;
        bool *visited = new bool[V]{0};
		int *distance = new int[V]{0};
		int *parents = new int[V]{-1};

		q.push(source);
		distance[source] = 0;
		parents[source] = source;
		visited[source] = true;

		while(!q.empty()) {
			int f = q.front();
			cout << f << endl;
			q.pop();
			for(auto node : l[f]) {
				if(!visited[node]) {
					q.push(node);
					distance[node] = distance[f] + 1;
					visited[node] = true;
					parents[node] = f;
				}
			}

			for(int i = 0; i < V; i++) {
				cout << "dist to " << i << " is " << distance[i] << endl;
			}

			if(destination != -1) {	
				long long temp = destination;
				while(temp != source) {
					cout << temp << " -- ";
					temp = parents[temp];
				}
				cout << source << endl;
			}
		}

    }

};

int main() {
	Graph g(7);
	g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);
	g.bfs(1, 6);
}