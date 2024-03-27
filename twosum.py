n = int(input("give the list lenght: "))

nums = []


for i in range(n):
    nums.append = int(input(""))

target = int(input("target: "))

numsMap = {}

for i, n in enumerate(nums):
    minus = target - n
    if minus in numsMap:
	res = f"[{numsMap[minus]},{i}]"
        print(res)
        break
    numsMap[n] = i
