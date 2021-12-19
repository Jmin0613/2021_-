def money_exchange(money, money_unit) : #함수선언(처리)
    unit= money_unit
    money_unit = money//unit
    money %= unit

    return money_unit

money, c50000, c10000, c5000, c1000 = 1,1,1,1,1
c500, c100, c50, c10 = 1,1,1,1

money=int(input("교환할 돈은 얼마?")) ##입력함수 input

money_50000 = money_exchange(money, c50000)
money_10000 = money_exchange(money, c10000)
money_5000 = money_exchange(money, c5000)
money_1000 = money_exchange(money, c1000)
money_500 = money_exchange(money, c500)
money_100 = money_exchange(money, c100)
money_50 = money_exchange(money, c50)
money_10 = money_exchange(money, c10)


print("50000원 %d장,10000원 %d장, 5000원 %d장, 1000원 %d장" % (c50000, c10000, money_5000, money_1000))
print("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개" %(money_500, money_100, money_50, money_10))
print("바꾸지 못한 돈 ==> %d원\n" % money)
