import math


def dijkstra(graph, start):
    min_lengths_to_nodes = {i + 1: math.inf for i in range(len(graph))}
    min_lengths_to_nodes[start] = 0

    shortest_path = {start: -1}

    visited_nodes = []
    current_node = start

    while len(graph) > len(visited_nodes) and current_node is not None:
        for neighbor_node in graph[current_node]:
            length_to_neighbor = min_lengths_to_nodes[current_node] + graph[current_node][neighbor_node]

            if min_lengths_to_nodes[neighbor_node] > length_to_neighbor:
                min_lengths_to_nodes[neighbor_node] = length_to_neighbor
                shortest_path[neighbor_node] = current_node

        visited_nodes.append(current_node)

        min_length = math.inf
        next_node = None
        for node in min_lengths_to_nodes:
            if min_lengths_to_nodes[node] < min_length and node not in visited_nodes:
                min_length = min_lengths_to_nodes[node]
                next_node = node

        current_node = next_node
    return min_lengths_to_nodes, shortest_path


def input_data():
    n = int(input())
    edges = [[int(i) for i in input().split()] for j in range(n)]
    start, end = [int(i) for i in input().split()]

    graph = {}
    for node in range(n):
        node_edges = {}
        for index, edge in enumerate(edges[node]):
            if edge == 0:
                continue
            node_edges[index + 1] = edge
        graph[node + 1] = node_edges

    return start, end, graph


def print_result(end, min_lengths_to_nodes, shortest_path):
    if min_lengths_to_nodes[end] == math.inf:
        print(0)
        return

    print(min_lengths_to_nodes[end])

    s = []
    s.insert(0, end)
    while shortest_path[end] != -1:
        end = shortest_path[end]
        s.insert(0, end)
    print(*s)


def main():
    start, end, graph = input_data()
    min_lengths_to_nodes, shortest_path = dijkstra(graph, start)
    print_result(end, min_lengths_to_nodes, shortest_path)


if __name__ == '__main__':
    main()