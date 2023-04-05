# 세 정수를 입력 받아 첫번째 정수 두번째 정수는 덧셈
# 그 결과 값과 세번째 정수는 뺄셈

def calc(a,b,c):
    result = int(a) + int(b) - int(c)
    print(f'{a} + {b} - {c} = {result}')

a = input('첫번째 수를 입력하세요')    
b = input('두번째 수를 입력하세요')    
c = input('세번째 수를 입력하세요')

calc(a,b,c)