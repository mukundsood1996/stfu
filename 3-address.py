import re
f = open("output_file.txt", "r")
current_stmt = 0
temp_variable = re.compile(r"t[0-9]*")
temp_label = re.compile(r"L[0-9]*")
"""
class address() :
	def __init__(stmt_no = current_stmt, op = "=", arg1 = None, arg2 = None) :
		self.stmt_no = current_stmt
		self.op = op
		self.arg1 = arg1
		self.arg2 = arg2
"""
def addressify(k) :
	global current_stmt
	print(k)
	if len(k) == 5 and k[1] in {"+", "-", "*", "/", "%"} :
		second = k[3]
		if k[0] not in mappings :
			mappings[k[0]] = "(" + str(current_stmt) + ")"
			first = str(mappings[k[0]])
		else :
			first = mappings[k[0]]
		if re.fullmatch(temp_variable, k[0]) :
			if k[0] not in mappings :
				print("error")
				quit()
			else :
				third = mappings[k[0]]
		else :
			third = k[0]
		if re.fullmatch(temp_variable, k[0]) :
			if k[0] not in mappings :
				print("error")
				quit()
			else :
				fourth = mappings[k[0]]
		else :
			fourth = k[0]				
		current_stmt += 1
		return [first, second, third, fourth]
	return k
		
mappings = {}
output_table = [] #stmt_no, op, arg1, arg2

for line in f:
	#print(line)
	k = line.split()
	k = addressify(k)
	print(" ".join(k))
f.close()
