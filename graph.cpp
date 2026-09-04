#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> adjList[5]; // array of vector

    // tambah edge (undirected)
    adjList[0].push_back(1);
    adjList[1].push_back(0);

    adjList[0].push_back(2);
    adjList[2].push_back(0);

    adjList[1].push_back(3);
    adjList[3].push_back(1);

    // cetak adjacency list
    for (int i = 0; i < n; i++) {
        cout << "Vertex " << i << ": ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    return 0;
}