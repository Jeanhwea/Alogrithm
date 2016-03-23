-- filename: basic.hs
-- author: Jeanhwea

-- 1. comments begin with --
--  for example, this is the comment

-- 2. types
--  types can be queried by type :t on ghci
--   ghci > :t True

-- 3. functions with pattern matching
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)

-- 4. list
--  list operations: head, tail, take, drop, replicate
alist = [1, 3, 4, 5]
h = head alist
tlist = tail alist

-- 5. using function with gaurds 
chain 1 = [1]
chain n 
    | odd n  = n : chain (n*3+1)
    | even n = n : chain (n `div` 2)

ans = head (filter p [chain n| n<-[1..]]) where p l = (length l) == 15

primes = filterPrime [2..]
    where filterPrime (p:xs) = p : filterPrime [x | x<-xs, x `mod` p /= 0]

-- 6. two sorting examples
qsort [] = []
qsort (a:x) = qsort [e | e<-x, e<a] ++ [a] ++ qsort [e | e<-x, e>=a]

msort [] = []
msort [a] = [a]
msort x = merge (msort left) (msort right)
        where left = take mid x
              right = drop mid x
              mid = length x `div` 2
              merge x [] = x
              merge [] y = y
              merge (a:x) (b:y) = 
                if a<b then a : merge x (b:y) 
                       else b : merge (a:x) y

-- end of file


