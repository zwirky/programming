m = 0
for i in range(100,1000):
	for j in range(100,1000):
		s = str(i * j)
		if s == s[::-1] and m < int(s):
			m = int(s)
print m
import itertools
print max(x*y for x in range(100,1000) for y in range(100,1000) if (lambda s:s==s[::-1])(str(x*y)))
print max(filter(lambda z:str(z)==str(z)[::-1], [x*y for x,y in itertools.combinations_with_replacement(range(100,1000), 2)]))
