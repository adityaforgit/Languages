n = int(input("Enter the number of players: "))
cricket = {}
for i in range(n):
    name = input(f"Enter name of player {i+1}: ")
    runs = int(input(f"Enter runs scored by {name}: "))
    cricket[name] = runs
search_name = input("Enter player's name to search: ")
if search_name in cricket:
    print(f"{search_name} scored {cricket[search_name]} runs.")
else:
    print("-1")
