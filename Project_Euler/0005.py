def gcd(a, b):
	ma = max(a, b)
	mi = min(a, b)
	if ma % mi == 0:
		return mi
	else:
		return gcd(mi, ma % mi)


def lcm(n, d):
	return n * d / gcd(n, d)

def main():
	d = 1
	for i in range(1,21):
		d = lcm(i, d)
	print d

if __name__ == '__main__':
	main()
