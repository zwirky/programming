a = raw_input()
multval, maxval = 5, 0
for i in range(len(a) - multval):
	maxval = max(maxval, reduce(lambda x, y:x * y, map(int, a[i:i+multval])))
print maxval
