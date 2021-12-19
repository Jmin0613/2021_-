import random

def judge_game(A,B, judge) : #함수선언(처리)
    if A > B :
        judge = 1
        return judge

    elif B > A :
        judge = 2
        return judge

    else :
        judge = 3
        return judge

judge = 0
   
A = random.randrange(1,7)
B = random.randrange(1,7)

print("A의 주사위 숫자는 %d입니다." % A)
print("B의 주사위 숫자는 %d입니다." % B)

judge_game(A, B, judge)

if judge ==1 : #출력함수
    print("A가 이겼습니다.")

elif judge ==2:
     print("B가 이겼습니다.")

else :
    print("비겼습니다.")
