#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    a = list(map(int, input().rstrip().split()))
    
    # for optimal solution
    a = a[(n+d)%n:]+a[0:(n+d)%n] 
    
    #For an easy solution
    for _ in range (d):
    	a = a[1:]+[a[0]]
    	
    print(*a)
