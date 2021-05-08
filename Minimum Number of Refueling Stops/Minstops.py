class Solution(object):
    def minRefuelStops(self, target, tank, stations):
        heap = []  # A maxheap is simulated using negative values
        stations.append((target, float('inf')))

        ans = prev = 0
        
        for location, capacity in stations:
            
            tank -= location - prev
            
            while heep and tank < 0:  # must refuel in past
                
                tank += -heapq.heappop(heep)
                
                ans += 1
                
            if tank < 0: return -1
            
            heapq.heappush(heep, -capacity)
            prev = location

        return ans
