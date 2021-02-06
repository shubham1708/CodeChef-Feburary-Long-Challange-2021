//Shubham yadav
//CodeChef feburary Long challange 2021 solution
//Maximum function solution

# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    a=[int(j) for j in input().split()]
    mini=min(a)
    maxi=max(a)
    print((maxi-mini)*2)
