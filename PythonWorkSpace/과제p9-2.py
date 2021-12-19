inStr=""
upper, lower, digit, korean, etc = 0, 0, 0 ,0, 0

inStr=input("문자열을 입력하세요: ")
for i in inStr:
    #대문자
    if ord('A') <= ord(i) <= ord('Z'):
        upper+=1
    #소문자
    elif ord('a') <= ord(i) <= ord('z'):
        lower+=1
    #숫자
    elif ord('0') <= ord(i) <= ord('9'):
        digit+=1
    #한글
    elif ord('가') <= ord(i) <= ord('힣'):
        korean +=1
    #기타
    else :
        etc+=1

print("대문자 : %d 소문자 : %d 숫자 : %d 한글 : %d 기타 : %d" % (upper, lower, digit, korean, etc))