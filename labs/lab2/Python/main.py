import math

print("You have vertices of the triangle at the coordinates you specified: A(a1;a2), B(b1,b2) and C(c1,c2).\n"
      "Please,set coordinates to determine the type of triangle: ")
a1 = float(input('a1 ='))
a2 = float(input('a2 ='))
b1 = float(input('b1 ='))
b2 = float(input('b2 ='))
c1 = float(input('c1 ='))
c2 = float(input('c2 ='))
AB: float = math.sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2))
BC: float = math.sqrt(pow(c1 - b1, 2) + pow(c2 - b2, 2))
CA: float = math.sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2))
if AB == BC and BC == CA:
    print('The type of triangle is equilateral')
if AB == BC or BC == CA or CA == AB:
    print('The type of triangle is isosceles')
else:
    print('The type of triangle is versatile')
