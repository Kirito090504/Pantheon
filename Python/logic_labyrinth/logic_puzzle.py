# Simple logic puzzle: Find numbers divisible by both 2 and 3 between 1 and 20

for num in range(1, 21):
    if num % 2 == 0 and num % 3 == 0:
        print(f"{num} is divisible by both 2 and 3")