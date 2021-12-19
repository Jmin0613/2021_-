a = (38, 21, 53, 62, 19)
print(a)

person = ('james', 17, 175.3, True)

a = tuple (range(10))
print(a)

b = tuple (range(5,12))
print(b)

c = tuple(range(-4,10,2))
print(c)

a_2 = [1,2,3]
tuple(a_2)
print(a_2)

b_2 = (4,5,6)
list(b_2)
print(b_2)

aa =[]
for i range(0,100) :
    aa.append(0)
print(len(aa))

aa = []
for i in range(0,4) :
    aapend(0)
hap=0

for i in range(0,4) :
    aa[i]=int(input(str(i+1)+"번째 숫자: "))

hap = aa[0] + aa[1] +aa[2] + aa[3]

print("합계 ==> %d" % hap)