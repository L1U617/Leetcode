# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        length = len(preorder)
        if length == 0:
            return None
        stack = []
        node = TreeNode(preorder[0])
        head = node
        stack.append(node)
        i = 0
        pointer = 0
        for i in range(1, length):
            if stack[-1].val != inorder[pointer]:
                node = TreeNode(preorder[i])
                stack[-1].left = node
                stack.append(node)
            else:
                while len(stack) != 0 and stack[-1].val == inorder[pointer]:
                    temp = stack.pop()
                    pointer += 1
                node = TreeNode(preorder[i])
                temp.right = node
                stack.append(node)
        return head
            
