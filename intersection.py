n1 = int(input("give the lenght of first list: "))

liste1 = set()

for i in range(n1):
    liste1.add(int(input("")))

n2 = int(input("give the lenght of second list: "))

liste2 = set()

for i in range(n2):
    liste2.add(int(input("")))

res = list()

for i in range(len(liste1) + 1):
    if i in liste1 and i in liste2:
        res.append(i)

print(res)
