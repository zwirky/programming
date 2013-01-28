fs, ss = 0, 0
for i in range(1, 101):
	fs = fs + i ** 2
	ss = ss + i
ss = ss ** 2
print ss - fs
