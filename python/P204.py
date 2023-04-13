"""
   map(리스트의 요소를 변화시킬 규칙(함수), 리스트의 요소):
    변경규칙(함수)를 적용하여 새로운 변화 리스트 요소를 반환
   lambda 함수 : 정규함수를 한줄로 표현되는 함수로 바꾼 함수
    정규함수는
        함수정의 -> 함수호출 -> 반환값 순으로 복잡합니다.
        보통 한줄로 모든것을 사용할 수 있는 함수도 많습니다.
        대표적으로 return x + y 같은 한줄 짜리 결과식을 반환하는 함수
        이러한 함수들은 다음과 같은 규칙을 사용하여 기억하면 됩니다.
        def(함수정의 키워드) + 함수명 + return => lambda로 바꾼다.
        남은 나머지 (입력파라미터) : 함수본체의 명령을 lambda뒤에 적어주면된다.
        그렇게하면 함수를 정의하고, 함수를 호출하고, 그 후 실행결과가 그자리에 남는다.
     """

a={1,2,3,4,5}
b=set(map(lambda x:x+100, a))
print(b)
""" 
    map()함수는 열거형 자료(list, set, tuple, dectionary)에 적용하여
    변화된 열거형 자료를 만들 때 주로 사용합니다.
    현재 map함수의 기능은 a의 리스트 요소를 순차적으로 받아서
    a리스트의 요소를 + 100을 한 결과를 새로운 요소로 반환한다.
    즉 map(a리스트의 요소)함수의 결과는 a리스트요소 + 100인 값이다.
"""

class Car:
    color = ''
    speed = 0
    def speedUp(self, x):
        self.speed = self.speed + x
    def speedDown(self,y):
        self.speed = self.speed - y

sonata = Car()
sonata.color = 'red'
sonata.speedUp(20)

print(sonata.color, sonata.speed)


""" 
    클래스의 멤버변수의 값을 서로 교환한다.
    멤버변수 x=y, y=x의 값으로 서로 값을 교환한다.
    self.x멤버변소의 값을 temp 변수에 대피
    self.x변수에 self.y의 값을 저장
    self.y변수에 temp(self.x의 값)의 값을 저장
    멤버함수(=메소드)에서 멤버변수를 가르키려면
    객체의 멤버변수다라는 뜻으로 C/JAVA에서는 this를 쓰나
    파이썬에서는 객체자신이라는 self키워드를 사용합니다.
"""


class Swap:
    x, y = 100, 200

    def change(self):
        temp = self.x
        self.x = self.y
        self.y = temp





    
