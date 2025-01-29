#wap which excepts the sequence of comma saprated numbers from console and gerate a list and tuple which contains every number s the follow input is supplied to the givern program 
# Accepting input from the user
input_sequence = input("Enter a sequence of comma-separated numbers: ")

# Generating the list and tuple
number_list = input_sequence.split(",")
number_tuple = tuple(number_list)

# Printing the results
print("List:", number_list)
print("Tuple:", number_tuple)
