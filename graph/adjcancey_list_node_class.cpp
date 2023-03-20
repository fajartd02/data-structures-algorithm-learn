#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	string name;
	list<string> neighbors;

	Node(string name) {
		this->name = name;
	}

};

class Graph {

	unordered_map<string, Node*> m;

public:
	Graph(vector<string> cities) {
		for(auto city: cities) {
			m[city] = new Node(city);
		}
	}

	void addEdge(string x, string y, bool undir=false) {
		m[x]->neighbors.push_back(y);
		if(undir) {
			m[y]->neighbors.push_back(x);
		}
	}

	void printAdjList(){
		for(auto cityPair : m){
			auto city = cityPair.first;
			cout<<city<<"-->";
			Node *node = cityPair.second;
			for(auto neighbor : node->neighbors){
				cout<<neighbor<<",";
			}
			cout<<endl;
		}
	}

};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<string> cities = {"Delhi","London","Paris","New York"};
	Graph g(cities);
	g.addEdge("Delhi","London");
	g.addEdge("New York","London");
	g.addEdge("Delhi","Paris");
	g.addEdge("Paris","New York");
	
	g.printAdjList();
}