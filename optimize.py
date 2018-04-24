import re
icg_file = "output_file.txt"
istemp = lambda s : bool(re.match(r"^t[0-9]*$", s)) 

def printicg(list_of_lines, message = "") :
	print(message.upper())
	for line in list_of_lines :
		print(line.strip())

list_of_lines = []
f = open(icg_file, "r")

for line in f :
	list_of_lines.append(line)
f.close()

def remove_dead_code(list_of_lines) :
	"""
Temporaries that are never assigned to any variable nor used in any expression are deleted. Done recursively.
	"""
	num_lines = len(list_of_lines)
	temps_on_lhs = set()
	for line in list_of_lines :
		tokens = line.split()
		if istemp(tokens[0]) :
			temps_on_lhs.add(tokens[0])

	useful_temps = set()
	for line in list_of_lines :
		tokens = line.split()
		if len(tokens) >= 2 :
			if istemp(tokens[1]) :
				useful_temps.add(tokens[1])
		if len(tokens) >= 3 :
			if istemp(tokens[2]) :	
				useful_temps.add(tokens[2])

	temps_to_remove = temps_on_lhs - useful_temps
	new_list_of_lines = []
	for line in list_of_lines :
		tokens = line.split()
		if tokens[0] not in temps_to_remove :
			new_list_of_lines.append(line)
	if num_lines == len(new_list_of_lines) :
		return new_list_of_lines
	return remove_dead_code(new_list_of_lines)

printicg(list_of_lines, "ICG")
new_list_of_lines = remove_dead_code(list_of_lines)
printicg(new_list_of_lines, "Optimized ICG after removing dead code")
	
	
	
