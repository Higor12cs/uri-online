#ok
num=int(input())
res=0

for i in range(0, num):
    tem, dis=map(int, input().split())
    res+=tem*dis

print(res)
