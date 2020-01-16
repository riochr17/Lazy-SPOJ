def get_sequence(_n):
	n = int(_n)

	if n == 0:
		return "Infinitely Many Solutions"

	solution = []
	temp_sum = 0
	step = 3
	i = step
	while step <= n:
		temp_sum = temp_sum + i
		i = i + 2
		if temp_sum >= n:
			if temp_sum == n:
				solution.append((step - 1) / 2)
			temp_sum = 0
			step = step + 2
			i = step

	return "No Solution" if len(solution) == 0 else solution

number_of_input = input()
for i in range(0, number_of_input):
	_input = raw_input()
	n = _input.split(' ')[2]
	print get_sequence(n)

