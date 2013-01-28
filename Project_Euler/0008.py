a = raw_input()
m = 0
for i in range(0, 1000):
	if i == 1000-5:
		break
	if a[i+4:i+5] == '0':
		i += 4
		continue
	if m < int(a[i:i+1])*int(a[i+1:i+2])*int(a[i+2:i+3])*int(a[i+3:i+4])*int(a[i+4:i+5]):
		m = int(a[i:i+1])*int(a[i+1:i+2])*int(a[i+2:i+3])*int(a[i+3:i+4])*int(a[i+4:i+5])
print m
