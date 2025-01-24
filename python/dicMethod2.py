def merge_dicts(dict1, dict2):
    # Create a copy of dict1 to avoid modifying the original
    merged_dict = dict1.copy()
    
    # Update the merged_dict with key-value pairs from dict2
    merged_dict.update(dict2)
    
    return merged_dict

# Example usage
dict1 = {'a': 1, 'b': 2, 'c': 3}
dict2 = {'d': 4, 'e': 5, 'f': 6}

merged_dict = merge_dicts(dict1, dict2)
print(merged_dict)
