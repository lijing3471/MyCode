
def searchNum(aList,target):
    for i in aList:
        if i>=target:
            return alist.index(i)
    if aList[0]>=target:
        return 0
    else:
        return len(aList)

if __name__ == '__main__':
    inp = input()
    target = int(inp[-1])
    alist = inp[1:-3].split(",")
  
    alist = [int(it) for it in alist]
    numIndex=searchNum(alist,target)
    print(numIndex)