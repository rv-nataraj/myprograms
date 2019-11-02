def getsumofdigits(n):
	sum=0
	while (n>0):
		sum = sum+int(n%10)
		n=int(n/10)
	return sum

n=3456
print("The sum of digits of ",n," is ",getsumofdigits(n))

