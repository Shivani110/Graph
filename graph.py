def graphEdge(Adjacent, m, n):
	Adjacent[m].append(n)
	Adjacent[n].append(m)
	return Adjacent

def Graphfn(m, Adjacent, Visit):
	Visit[m] = True
	print(m, end = " ")
	for p in range(len(Adjacent[m])):
		if (Visit[Adjacent[m][p]] == False):
			Graphfn(Adjacent[m][p], Adjacent, Visit)

def Graph_g(Adjacent, x):
	Visit = [False]*(x+1)
	for m in range(x):
		if (Visit[m] == False):
			Graphfn(m, Adjacent, Visit)

if __name__ == '__main__':
	x = 6
	Adjacent = [[] for i in range(x)]
	Adjacent = graphEdge(Adjacent, 0, 1)
	Adjacent = graphEdge(Adjacent, 0, 5)
	Adjacent = graphEdge(Adjacent, 0, 2)
	Adjacent = graphEdge(Adjacent, 1, 1)
	Adjacent = graphEdge(Adjacent, 1, 2)
	Adjacent = graphEdge(Adjacent, 2, 1)
	Adjacent = graphEdge(Adjacent, 3, 5)
	Graph_g(Adjacent, x)

