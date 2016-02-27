T = int(raw_input())

for it in range(T):
    len_s = int(raw_input())
    corr = raw_input()
    answrd = raw_input()
    Wi = map(int, raw_input().split())
    
    _max = 0
    num_corr = 0
    for i in range(len_s):
        if answrd[i] == corr[i]:
            num_corr += 1
            if Wi[num_corr] >= Wi[_max]:
                _max = num_corr
    print Wi[_max]
