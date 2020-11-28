t = int(input())

while t>0:
    n,a,b = map(int,input().split())
    
    temp_n = 0

    print(min(n*a, n//2*b + (n%2)*a))

    t-=1