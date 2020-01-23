import math as m
import sys as s

def check_int(time,n):
    x1=float(m.log10(n)/m.log10(4))
    if m.ceil(x1)==time and m.floor(x1)==time:
        return 1
    else:
        return -1


s=input()
n=0
z=len(s)-1

try:
    for i in range(0,len(s)):
        if s[i]=='1':
            n+=2**z
        z=z-1
    time=int(m.log10(n)/m.log10(4))
    if(check_int(time,n)==1):
        print(time)
    else:
        print(time+1)
except:
    print(0)
