def is_Leap(year):
    if year%4==0:
        if year%400==0: return True
        if year%100==0: return False
        return True
    else:
        return False

temp=int(input())
print(is_Leap(temp))
