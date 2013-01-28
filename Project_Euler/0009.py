def pitagoras():
	for a in range(1, 999):
		for b in range(1, 999):
			if a > b:
				continue
			c = 1000 - a - b
			if b > c or a + b + c != 1000 or a ** 2 + b ** 2 != c ** 2:
				continue
			s = a * b * c
			return s

print pitagoras()
