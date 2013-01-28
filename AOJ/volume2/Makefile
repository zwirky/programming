.c:
	gcc -o $@ $@.c
	./$@ < $@.in > $@.result
	diff $@.result $@.out
