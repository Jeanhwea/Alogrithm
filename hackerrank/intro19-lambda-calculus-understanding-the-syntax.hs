-- filename: intro19-lambda-calculus-understanding-the-syntax.hs
-- author: Jeanhwea

--   (λx.x+1)((λy.y+2)3)
-- = (λx.x+1)((λy.y+2)3)
-- = (λx.x+1)([3/y] y+2)
-- = (λx.x+1)(3+2)
-- = (λx.x+1) 5
-- = [5/x] x+1
-- = 5+1
-- = 6


