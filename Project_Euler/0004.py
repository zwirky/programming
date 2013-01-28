m = 0
for i in range(100,1000):
	for j in range(100,1000):
		k =str(i * j)
		if not(k[0] == k[-1] and k[1] == k[-2]):
			continue
		if i * j / 10000 == 1 and m < int(k):
			m = int(k)
		elif k[2] == k[-3] and m < int(k):
			m = int(k)
print m
