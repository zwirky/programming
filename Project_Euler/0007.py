from math import sqrt

def isprime(n):
	prime = True
	for j in range(int(sqrt(n)), 1, -1):
		if n / j == n / float(j):
			prime = False
			break
	return prime

def main():
	n = 10001
	p = 3
	k = 2
	while k < n:
		p += 2
		if isprime(p):
			k += 1
	print p

if __name__ == '__main__':
	main()
