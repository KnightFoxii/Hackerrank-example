#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'longestCommonSubsequence' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def longestCommonSubsequence(a, b):
    n , m = len(a),len(b)
    
    dp = [[0]*(m+1) for z in range (n+1)]

    for i in range(n):
        for j in range (m):
            
            if a[i] == b[j]:
                dp[i+1][j+1] = dp[i][j]+1
            else:
                dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j])
    
    i , j , v = n , m , []
    
    while i>0 and j>0:
        if a[i-1] == b[j-1]:
            v.append(a[i-1])
            i = i - 1
            j = j - 1
        else:
            if dp[i-1][j] > dp[i][j-1]:
                i = i - 1
            else:
                j = j - 1
    
    return reversed(v)
            
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = longestCommonSubsequence(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

