#wap to compute the number of charators, words, line in a file 
def compute_file_metrics(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            
            num_lines = len(lines)
            num_words = sum(len(line.split()) for line in lines)
            num_characters = sum(len(line) for line in lines)
            
        return num_lines, num_words, num_characters
    except FileNotFoundError:
        print(f"Error: The file '{file_path}' was not found.")
    except IOError:
        print("Error: Could not read the file.")

# Example usage:
file_path = 'try.txt'
lines, words, characters = compute_file_metrics(file_path)

print(f"Number of lines: {lines}")
print(f"Number of words: {words}")
print(f"Number of characters: {characters}")
