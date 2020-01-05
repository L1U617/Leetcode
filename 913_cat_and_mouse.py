class Solution(object):
    def catMouseGame(self, graph):
        """
        :type graph: List[List[int]]
        :rtype: int
        """
        NUM = len(graph)

        def parents(m, c, t):
            if t == 2:
                for i in graph[m]:
                    yield i, c, 3 - t
            elif t == 1:
                for i in graph[c]:
                    if i != 0:
                        yield m, i, 3 - t

        DRAW, MOUSE, CAT = 0, 1, 2
        color = collections.defaultdict(int)        
        degree = {}
        for m in range(NUM):
            for c in range(NUM):
                degree[m, c, 1] = len(graph[m])
                degree[m, c, 2] = len(graph[c]) - (0 in graph[c])

        queue = collections.deque()
        
        for i in range(NUM):
            for t in range(1, 3):
                color[0, i, t] = MOUSE
                queue.append((0, i, t, MOUSE))
                if i > 0:
                    color[i, i, t] = CAT
                    queue.append((i, i, t, CAT))
        
        
        while queue:
            m, c, t, w = queue.popleft()
            for m1, c1, t1 in parents(m, c, t):
                if color[m1, c1, t1] == DRAW:
                    if t1 == w:
                        color[m1, c1, t1] = t1
                        queue.append((m1, c1, t1, t1))
                    else:
                        degree[m1, c1, t1] -= 1
                        if degree[m1, c1, t1] == 0:
                            color[m1, c1, t1] = 3 - t1
                            queue.append((m1, c1, t1, 3 - t1))
        
        return color[1, 2, 1]
