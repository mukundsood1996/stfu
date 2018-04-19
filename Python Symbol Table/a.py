filename = "a.c"

cur_scope = ["global"]
cur_type = "void"

keywords = {"break","else","long","switch","case","enum","register","typedef",
"char","extern","return","union","const","float","short","unsigned","continue",
"for","signed","void","default","goto","sizeof","volatile","do","if","static","while"}

punctuators = {';','{','}','[',']','(',')',','}

operators = {'+', '-', '*','/','%','++','--',							#Arithmetic
'==', '!=', '>', '<', '>=', '<=',										#Relational
'&&', '||', '!',														#Logical
'&', '|', '^', '~', '<<', '>>'											#Bitwise
'=', '+=', '-=', '*=', '/=', '%=', '<<=', '>>=', '&=', '^=', '|=',		#Assignment
'?', ':' }																#Ternary

datatypes = {"int", "char", "float", "void"}
def is_number(string) :
	try :
		float(string)
		return True
	except ValueError :
		return False

def quitter() :
	print("An error occured while creating the symbol table. You might want to add spaces around all tokens. '{' should not be alone in a new line")
	quit()
def get_token_type(token) :
	if token in keywords :
		return "keyword"
	elif token in punctuators :
		return "punctuator"
	elif token in operators :
		return "operator"
	elif (token[0] == "'" and token[-1] == "'") or (token[0] == '"' and token[-1] == '"') or is_number(token) :
		return "literal"
	else :
		return "identifier"

class Symbol(object) :
	def __init__(self, token, type, rvalue = None) :
		self.name = token
		self.scope = cur_scope[-1]
		#self.token_type = get_token_type(token)
		self.type = type
		self.value = rvalue
	def __repr__(self) :
		return "Name : "+ str(self.name) + ", Type : " +  str(self.type) + ", Scope : "+ str(self.scope) + ", Value : " + str(self.value)
SymbolTable = {}

f = open(filename, "r")
lineno = 0
for line in f :
	lineno += 1
	token_list = line.split()
	for ind in range(len(token_list)) :
		token = token_list[ind]
		if token == "{" :
			cur_scope.append(" ".join(token_list[:ind]))
		if token == "}" :
			cur_scope.pop()
		if token == "=" :
			if token_list[ind-2] in datatypes : #new declaration
				datatype = token_list[ind-2]
				name = token_list[ind-1]
				if (ind+1 < len(token_list)) and get_token_type(token_list[ind+1]) == "literal" :
					rvalue = token_list[ind+1]
				elif (ind+1 < len(token_list)) and get_token_type(token_list[ind+1]) == "identifier" :
					try :
						rvalue = SymbolTable[(token_list[ind+1], cur_scope[-1])].value
					except KeyError :
						print(token_list[ind+1], "has not been declared in the current scope. Line", lineno)
						quitter()
				else :
					rvalue = None
				new = Symbol(name, datatype, rvalue)
				if (name, cur_scope[-1]) in SymbolTable :
					print("Duplicate declaration of", name, "Line", line)
				else :
					SymbolTable[(name, cur_scope[-1])] = new
for item in SymbolTable.values() :
	print(item)


f.close()