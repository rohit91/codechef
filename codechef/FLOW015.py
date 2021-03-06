T = int(raw_input())

days = { 0 : 'monday',
         1 : 'tuesday',
         2 : 'wednesday',
         3 : 'thursday',
         4 : 'friday',
         5 : 'saturday',
         6 : 'sunday' }

def isLeap(yr):
    if (yr % 4 == 0 and yr % 100 != 0) or (yr % 400 == 0):
        return True
    else:
        return False

for it in range(T):
    yr = int(raw_input())
    init = 2001
    day = 0
    if yr > init:
        while(yr != init):
            day = (day + (366 % 7 if isLeap(init) else 365 % 7)) % 7
            init += 1
    else:
        while(yr != init):
            init -= 1
            day = (day - (366 % 7 if isLeap(init) else 365 % 7)) % 7
    print days[day]
