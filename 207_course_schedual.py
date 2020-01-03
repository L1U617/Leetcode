class Solution(object):
    def canFinish(self, numCourses, prerequisites):
        """
        :type numCourses: int
        :type prerequisites: List[List[int]]
        :rtype: bool
        """
        '''
        G = [[] for row in range(numCourses)]
        for i in prerequisites:
            G[i[0]].append(i[1])

        def isCycle(course, visited):
            if visited[course] != 0:
                return False              
            else:
                visited[course] = 1
            for item in G[course]:
                if isCycle(item,visited) == False:
                    return False
                visited[item]=0
            return True

        for i in range(numCourses):
            visited = [0 for row in range(numCourses)]
            if isCycle(i, visited) == False:
                return False
        
        return True
        '''
        """
        update
        """
        G = [[] for i in range(numCourses)]
        Q = []
        inDegree = [0 for i in range(numCourses)]
        
        for pair in prerequisites:
            G[pair[0]].append(pair[1])
            inDegree[pair[1]] += 1
        count = 0
        for i in range(numCourses):
            if inDegree[i] == 0:
                Q.append(i)
                count += 1
        
        while len(Q) > 0:
            v = Q[0]
            del(Q[0])
            for adjacent in G[v]:
                inDegree[adjacent] -= 1
                if inDegree[adjacent] == 0:
                    Q.append(adjacent)
                    count += 1
        
        if count == numCourses:
            return True
        else:
            return False
