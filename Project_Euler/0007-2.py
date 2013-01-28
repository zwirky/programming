def prime(n):
	c = 0
	for i in range(2, n):
		for j in range(2, i):
			if i % j == 0:
				break
		else:
			c = c + 1
			if c == 10001:
				return i

n = raw_input()
print prime(int(n))
