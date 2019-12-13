def print_numbers(a,d,n):
	x=a
	for i in range(1,n+1):
		print(x)
		x = x + d

def print_numbers2(a,d,n):
	x=a
	for i in range(1,n+1):
		print(x)
		x = x * d

a = 2
d = 6
n = 5
print_numbers(a, d, n)
print_numbers2(a, d, n)
