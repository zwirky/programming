n = 600851475143
m = 0
i = 2
while n > 1:
	if n % i == 0:
		n = n / i
		if m < i:
			m = i
		i = 2
	else:
		i = i + 1
print m
