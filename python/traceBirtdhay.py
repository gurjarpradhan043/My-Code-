#wap to use split and join method in the string and trace birthday of a person a dictionary data stracture 
def trace_birthday(birthday_str):
    # Using split to convert the input string to a list
    name_and_birthday = birthday_str.split(",")
    
    # Creating the dictionary with name and birthday
    birthday_dict = {name_and_birthday[0].strip(): name_and_birthday[1].strip()}
    
    return birthday_dict

def format_birthday_dict(birthday_dict):
    # Using join to create a formatted string from the dictionary
    formatted_str = " : ".join([f"{name} : {date}" for name, date in birthday_dict.items()])
    return formatted_str

# Example usage:
input_str = "Pradhan,""25-5-2005"
birthday_info = trace_birthday(input_str)
formatted_info = format_birthday_dict(birthday_info)
print("Birthday Dictionary:", birthday_info)
print("Formatted Birthday Info:", formatted_info)
