inStr, outStr = "", ""

inStr=input("문자열 --> ")

for i in inStr:
    if i.isdigit():
        continue
    outStr+=i

print("숫자 제거 --> ", outStr)