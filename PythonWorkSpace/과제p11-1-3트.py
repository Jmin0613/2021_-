def money_exchange(money, c50000, c10000, c5000, c1000, c500, c100, c50, c10): #함수선언(처리)
    c50000 = money//50000
    money %= 50000

    c10000 = money//10000
    money %= 10000

    c5000 = money//5000
    money %= 5000

    c1000 = money//1000
    money %= 1000

    c500 = money//500
    money %= 500

    c100 = money//100
    money %= 100

    c50 = money//50
    money %= 50

    c10 = money//10
    money %= 10

    return money, c50000, c10000, c5000, c1000, c500, c100, c50, c10

money, c50000, c10000, c5000, c1000 = 0,0,0,0,0
c500, c100, c50, c10 = 0,0,0,0

money=int(input("교환할 돈은 얼마?")) ##입력함수 input

money, c50000, c10000, c5000, c1000, c500, c100, c50, c10 = money_exchange(money, c50000, c10000, c5000, c1000, c500, c100, c50, c10)

print("50000원 %d장,10000원 %d장, 5000원 %d장, 1000원 %d장" % (c50000, c10000, c5000, c1000)) #출력함
print("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개" %(c500, c100, c50, c10))
print("바꾸지 못한 돈 ==> %d원\n" % money)