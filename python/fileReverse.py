#wap to print each line of a file in reverse order
def print_lines_in_reverse(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            for line in lines:
                print(line.strip()[::-1])  # Reverses each line
    except FileNotFoundError:
        print(f"Error: The file '{file_path}' was not found.")
    except IOError:
        print("Error: Could not read the file.")

# Example usage:
file_path = 'try.txt'
print_lines_in_reverse(file_path)



