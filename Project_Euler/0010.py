from math import sqrt

def isprime(n):
	prime = True
	for j in range(int(sqrt(n)), 1, -1):
		if n / j == n / float(j):
			prime = False
			break
	return prime

def main():
	n = 2000000
	p = 5
	s = 5
	while p <= n:
		if isprime(p):
			s = s + p
		p += 2
		if p <= n and isprime(p):
			s = s + p
		p += 4
	print s

if __name__ == '__main__':
	main()
