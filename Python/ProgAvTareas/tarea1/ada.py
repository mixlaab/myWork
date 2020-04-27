def solution(N):
    max_gap = 0
    current_gap = 0
    while N > 0 and N%2 == 0:
        N //= 2
    while N > 0:
        remainder = N%2
        if remainder == 0:
            current_gap += 1
        else:
            if current_gap != 0:
                max_gap = max(current_gap, max_gap)
                current_gap = 0
        N //= 2
    return max_gap
