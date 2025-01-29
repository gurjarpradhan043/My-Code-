#wap to count the number of characters in the string and stored them in a dictionary data structure 
def count_characters(string):
    char_count = {}
    for char in string:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1
    return char_count

# Example usage:
input_string = input("Enter the String: ").lower()
result = count_characters(input_string)
print("Character count:", result)
