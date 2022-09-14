import os
import cv2
import numpy as np

def name():
    n = int(input())
    inp = input().split(" ")
    inp = [int(it) for it in inp]
    res = 0
    max1=0
    sum=0
    cnt=0
    
    for i in range(n,2):
        max1 = max(inp[i],max1)
        
def test2(str):
    inp = str.split()
    inp = [it[::-1] for it in inp]
    res = ""
    for i in range(len(inp)-1):
        res += inp[i]+" "
    res += inp[-1]
    print(res)
# inp = input()
# test2(inp)

def subsets(nums):

    # 可能数: 每个数字可能存在可能不存在，总可能数为 2^num
    allset = 2 ** len(nums)
    result = []
    # 得到所有可能
    for i in range(allset):
        item = []
        for j in range(len(nums)):
            if i & (2 ** j):
                item.append(nums[j])
                item.sort()
        # if item not in result:
        result.append(item)
    return result

def sub(nums):
    res = [] 
    sum = 0
    for i in range(len(nums)):
        it = []
        for j in range(i, len(nums)):
            it.append(nums[j])
            if len(it)>=1:
                if max(it)/min(it) == k and max(it)%min(it) == 0:
                    sum += 1
            # res.append([it for it in t])
    print(sum)
    # return res
# inp = input().split()
# inp  = [int(it) for it in inp]
# n,k = inp[0],inp[1]
# inp = input().split()
# inp  = [int(it) for it in inp]

def com(tmp,ts):
    tmp = list(tmp)
    ts = list(ts)
    res = [tmp[i] == ts[i] for i in range(len(tmp))]
    for i in range(len(res)):
        if res[i]:
            continue
        else:
            if ts[i] == "*":
                continue
            else:
                return False
    return  True    
def t2(s1,s2):
    ts = s2[::-1]
    for i in range(0,len(s1)):
        tmp = s1[i:i+len(ts)]
        print(tmp,ts)
        if com(tmp,ts):
            return i+len(ts)-1
        else:
            continue
    return -1


s1 = "hello world"
s2 = "d**o"
s3 = "lho"

# print(s2,s3)
# res = [s2[i] == s3[i] for i in range(len(s2))]
# print(res)
print(t2(s1,s2))
# inp = input().split(",")
# s1,s2 = inp[0], inp[1]

# print(s1,s2)
# sub(inp)
# sum = 0
# for it in res:
#     if len(it)>=1:
#         if max(it)/min(it) == k and max(it)%min(it) == 0:
#             sum += 1
# print(sum)

# name()