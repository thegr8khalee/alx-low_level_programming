def is_palindrome(num):
    return str(num) == str(num)[::-1]

largest_palindrome = 0

for i in range(100, 1000):  # Iterate through 3-digit numbers
    for j in range(i, 1000):  # Start from i to avoid duplicate pairs and only check half of the combinations
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

print("The largest palindrome made from the product of two 3-digit numbers is:", largest_palindrome)
