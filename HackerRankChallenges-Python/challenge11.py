def Challenge_11():
    records = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        records.append([name, score])
        
    scores = []
    for element in records:
        scores.append(element[1])
    
    sortedUniqueScores = sorted(set(scores))
    for element in sorted(records):
        if element[1] == sortedUniqueScores[1]:
            print(element[0])
