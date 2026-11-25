size = int(input("Enter hash table size: "))
hash_table = [None] * size

n = int(input("Enter the number of elements: "))

for i in range(n):
    key = int(input("Enter a key: "))

    index = key % size

    while hash_table[index] is not None:
        index = (index + 1) % size

    hash_table[index] = key

print("\nHash Table:")

for i in range(size):
    print(i,":",hash_table[i])