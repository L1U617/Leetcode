class Solution(object):
    def canFinish(self, numCourses, prerequisites):
        """
        :type numCourses: int
        :type prerequisites: List[List[int]]
        :rtype: bool
        """
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
