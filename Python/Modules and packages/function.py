def gcd(a,b):
    """Compute the greatest common divisor of a and b using the Euclidean algorithm."""
    while b:
        a, b = b, a % b
    return abs(a)
def lcm(a,b):
    """Compute the least common multiple of a and b."""
    if a == 0 or b == 0:
        return 0
    return abs(a * b) // gcd(a, b)