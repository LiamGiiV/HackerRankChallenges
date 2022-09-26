def Challenge_10():
    n = int(input())
    arr = set(map(int, input().split()))
    arr.remove(max(arr))
    print(max(arr))