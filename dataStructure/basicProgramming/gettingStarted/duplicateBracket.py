# Below is Pythone code for input/output 

import sys 
# For getting input from input.txt file 
sys.stdin = open('input.txt', 'r') 

# Printing the Output to output.txt file 
sys.stdout = open('output.txt', 'w') 

s = input()

stack = []

n = len(s)


for i in range(n):
	stack.append(s[i])


for i in range(n):
	if(s[i] == ')'):
		#kuch aur
		if(stack[i] == '('):
			print("true")
			# return true
			
		else:
			while(stack[0] != '('):
				stack.pop()
			stack.pop()
	else:
		stack.append(s[i])


print("false")
# print()
# print('Ok')