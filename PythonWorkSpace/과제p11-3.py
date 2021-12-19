def delete_digit(inStr, outStr) : ##함수선언(처리)
    for i in inStr:
        if i.isdigit():
            continue
        outStr+=i
    return outStr

inStr, outStr, result = "", "", ""

inStr=input("문자열 --> ")  ##입력함수 input

result=delete_digit(inStr, outStr)

print("숫자 제거 --> ", result) ##출력함수 print