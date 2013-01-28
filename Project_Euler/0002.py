a = [1, 2]
s = 2
while 1:
	b = a[-2] + a[-1]
	if b > 4000000:
		break
	a.append(b)
	if b % 2 == 0:
		s = s + b
print s
