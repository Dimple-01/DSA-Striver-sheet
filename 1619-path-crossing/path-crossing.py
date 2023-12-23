class Solution:
    def isPathCrossing(self, path: str) -> bool:
        #Brute force
        x,y=0,0
        visited = {(0,0)}
        for direction in path:
            if direction == 'E':
                x+=1
            elif direction == 'W':
                x-=1
            elif direction == 'N':
                y+=1
            else:
                y-=1

            if (x,y) in visited:
                return True
            
            visited.add((x,y))
        return False

        