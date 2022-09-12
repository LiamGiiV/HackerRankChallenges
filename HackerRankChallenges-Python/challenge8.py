from itertools import product

def Challenge_8():
    first = map(int, input().split())
    second = map(int, input().split())

    products = tuple(product(first,second))

    for element in products:
        print(element, end=' ')