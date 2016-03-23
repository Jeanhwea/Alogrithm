-- filename: intro21-lambda-calculus-evaluate-the-expression-1.hs
-- author: Jeanhwea

--  λx.λy.x(xy) 


-- define 0 = λf . λx . x
-- define 1 = λf . λx . f x
-- define 2 = λf . λx . f (f x)
-- define 3 = λf . λx . f (f (f x)) and so on.

-- that answer is 3


