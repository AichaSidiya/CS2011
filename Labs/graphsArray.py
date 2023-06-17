n = int(input("Enter number of vertecies: "))
m = int(input("Enter number of edges: "))

adjMat =[[0]*(n+1)]*(n+1)
vetreciesList = list()
for i in range(m):
    u = int(input("Enter verticies 1# value: "))
    v = int(input("Enter verticies 2# value: "))

    adjMat[u][v] = 1
    adjMat[v][u] = 1

    vetreciesList.append(u)
    vetreciesList.append(v)

    print("Edge created")

def printMatrix(matrix):
    print()
    print("**The adjacency matrix**")
    print()
    for i in matrix:
        for j in i:
            print(j, end = " ")
        print()

def printList(matrix, vetrecies):
    print()
    print("**The adjacency list**")
    print()
    for i in matrix:
        for j in i:
            if j == 1:
                print(vetrecies[j], " -----> ", vetrecies[i])
        print()

printMatrix(adjMat)
printList(adjMat, vetreciesList)
