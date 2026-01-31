'''def fun(x,y):
    global z
    x = x+4
    z= y+3
    print('Within function',x,y,z)
x,y,z=10,20,30
print('before function call',x,y,z)
fun(x,y)
print('after function call',x,y,z) '''
'''r = lambda x, y: x + y
print(r(10,20))
l1=[1,2,3,4,5]
l2=list(map(lambda x: x + 4,l1))
print(l2)'''
#lambda function
'''
r = lambda x, y: x + y
print(r(10,20))
'''
#map(f,i),reduce(f,i),filter(f,i)
from functools import reduce
l1=[1,2,3,4,5]
l2=reduce(lambda x,y:x+y,l1)
print(l2)