def left_right(a):
	s = 0
	for line in a:
		for i in range(17):
			t = reduce(lambda a,b:a*b,line[i:i+4])
			if s < t:
				print line[i:i+4]
				s = t
	return s

def top_down(a):
	s = 0
	for i in range(20):
		for j in range(i+1,20):
			t = a[i][j]
			a[i][j] = a[j][i]
			a[j][i] = t
	return left_right(a)

def cross(a):
	s = 0
	for i in range(17):
		for j in range(17):
			b = []
			for k in range(4):
				b.append(a[i+k][j+k])
			t = reduce(lambda a,b:a*b,b)
			if s < t:
				s = t
	return s

def main():
	a = []
	for line in open('0011.in'):
		itemlist = line.split(' ')
		numbers = [int(item) for item in itemlist]
		a.append(numbers)
	print max(left_right(a), max(top_down(a), cross(a)))

if __name__ == '__main__':
	main()
