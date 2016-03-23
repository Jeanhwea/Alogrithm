-- filename: intro01-fp-solve-me-first.hs
-- author: Jeanhwea

-- solve the first problem
-- read tow number a & b, and print the sum of a & b

main = do
    a <- readLn
    b <- readLn
    let s = a+b
    print s
