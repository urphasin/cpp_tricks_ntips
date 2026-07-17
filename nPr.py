def nPr(n, r):
  if r > n or r < 0 or n < 0:
    return 0
  
  result = 1

  for i in range(r):
    result *= (n-i)
  
  return result


print(nPr(10, 2))