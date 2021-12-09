#include <iostream>
#include <map>
#include <vector>
#include <climits>
#include<algorithm>
using namespace std;


pair<map<int, int>, map<int,int>> dijkstra(map <int, map<int, int>> graph, int start) {
    map <int, int> min_lengths_to_nodes;
    for (int i = 0; i < graph.size(); i++) {
        min_lengths_to_nodes[i + 1] = INT_MAX;
    }

    min_lengths_to_nodes[start] = 0;
    map <int, int> shortest_path;
    shortest_path[start] = -1;

    vector<int> visited_nodes;
    int current_node = start;
    int length_to_neighbor;

    while (graph.size() > visited_nodes.size() && current_node != NULL) {
        for (auto neighbor_node : graph[current_node]) {
            length_to_neighbor = min_lengths_to_nodes[current_node] + graph[current_node][neighbor_node.first];
            if (min_lengths_to_nodes[neighbor_node.first] > length_to_neighbor) {
                min_lengths_to_nodes[neighbor_node.first] = length_to_neighbor;
                shortest_path[neighbor_node.first] = current_node;
            }
        }
        visited_nodes.push_back(current_node);
        int min_length = INT_MAX;
        int next_node = NULL;
        for (auto node : min_lengths_to_nodes) {
            if (min_lengths_to_nodes[node.first] < min_length && find(visited_nodes.begin(), visited_nodes.end(), node.first) == visited_nodes.end())
            {
                min_length = min_lengths_to_nodes[node.first];
                next_node = node.first;
            }
        }

        current_node = next_node;
    }
    return pair<map<int, int>, map<int, int>>( min_lengths_to_nodes, shortest_path);
}

int main() {
    //input
    int n, start, end;
    cin >> n;
    vector < vector <int> > edges(n, vector <int>(n)); 

    for (int i = 0; i < n; i++)     
        for (int j = 0; j < n; j++) 
        {
            cin >> edges[i][j]; 
        }
    cin >> start >> end;
    map <int, map<int, int>> graph;
    for (int node = 0; node < n; node++) {
        map <int, int> node_edges;
        for (int index = 0; index < edges[node].size(); index++) {
            if (edges[node][index] == 0)
                continue;
            node_edges[index + 1] = edges[node][index];
        }
        graph[node + 1] = node_edges;
    }


    //print
    pair<map<int, int>, map<int, int>> para = dijkstra(graph, start);
    map <int, int> min_lengths_to_nodes = para.first;
    map <int, int> shortest_path = para.second;
    if (min_lengths_to_nodes[end] == INT_MAX) {
        cout << "0";
    }
    else {
        cout << min_lengths_to_nodes[end] << endl;
        vector<int> s;
        s.insert(s.begin(), end);
        while (shortest_path[end] != -1) {
            end = shortest_path[end];
            s.insert(s.begin(), end);
            
        }
        for (int i = 0; i < s.size(); i++) {
            cout << s[i] << " ";
    }
    }
    system("pause");
    return 0;
}