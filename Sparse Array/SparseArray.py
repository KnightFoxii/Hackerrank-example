from collections import Counter
s = list()
q = list()
#input() for input String parameter  
#Input String 
for _ in range(int(input())):
    s.append(input())
#Question String to search for occurance
for _ in range(int(input())):
    q.append(input())

#Counter to count the number of occurance of each string in a list
dict = Counter(s)

#loop through and compare Strings 
for str in q:
    if str in dict:
        print(dict.get(str))
    else:
        print(0)


