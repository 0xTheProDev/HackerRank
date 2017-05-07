'''
A country has n cities numbered from  to  and  bidirectional bus routes for traveling between cities. A pair of cities may be connected by multiple bus routes, and one or more bus routes may connect a city to itself.

For example, the diagram below has n = 8 cities and m = 7  bus routes given by the pairs (4, 4), (2, 3), (2, 3), (2, 5), (2, 7), (5, 7), (6, 8):

![image](https://s3.amazonaws.com/hr-assets/0/1493669991-76e376e280-Maximal-Tourism-PS.png)

In the graph above, city 1 has no bus routes; city 4 is only connected to itself; cities 2, 3, 5 and 7 are connected to each other; and cities 6 and 8 are connected to each other.

Jason wants to fly into one of the country's cities and then travel to as many connected cities as possible via the bus system. Given a map of the country, can you find the maximum number of connected cities Jason can visit?

'''

#!/bin/python3

import sys

n, m = input().strip().split(' ')
n, m = [int(n), int(m)]
route = []
for route_i in range(m):
   route_t = [int(route_temp) for route_temp in input().strip().split(' ')]
   route.append(set(route_t))
while(True):
    count = 0
    for i in range(0, len(route)):
        for j in range(i + 1, len(route)):
            if len(route[i] & route[j]) > 0:
                route[i] = route[i] | route[j]
                route[j] = set()
                count += 1
    if count == 0:
        break
# DEBUG print(route)
count = 0
for i in range(0, len(route)):
    if count < len(route[i]):
        count = len(route[i])
print(count)
