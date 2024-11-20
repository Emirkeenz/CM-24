import math

def midPoint(a, b, n):
    h = (b - a) / n
    integral = 0.0
    for i in range(1, n+1):
        integral += math.log(a + ((i - 0.5)*h))
        print(i, " ", h, " ", integral)
    return integral*h

if __name__ == "__main__":
    a = 1
    b = 3
    n = 2
    result = midPoint(a, b, n)
    print(result)
