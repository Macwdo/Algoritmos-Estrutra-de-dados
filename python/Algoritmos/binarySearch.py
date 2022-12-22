import time



def binarySearch(listItems, searchItem):
    middle = int(len(listItems)/2)

    if len(listItems) == 1:
        return print("We cant found your search")

    if listItems[middle] == searchItem:
        return print(f"Your searchItem it found in the middle {searchItem}")
    
    if searchItem > listItems[middle]:
        print(f"listItems now -> {listItems}")
        return binarySearch(listItems[middle:], searchItem)

    if searchItem < listItems[middle]:
        print(f"listItems now -> {listItems}")
        return binarySearch(listItems[:middle], searchItem)

def folheando(listItems, searchItem):
    for i in range(len(listItems)):
        print(i)
        if listItems[i] == searchItem:
            return print(f"Found {listItems[i]}")


now = time.time()
binarySearch(list(range(100000)), 99999)
finish = time.time()
print(f"{finish-now:.3f}")