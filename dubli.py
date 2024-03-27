n = int(input("gie the lengh:"))

liste = []
for i in range(n):
    liste.append(int(input("")))

hasmap = set()

target = int(input("give me the target: "))

for i in liste:
    if i not in hasmap:
        hasmap.add(i)

print(list(hasmap))
