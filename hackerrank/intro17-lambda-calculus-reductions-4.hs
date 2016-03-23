-- filename: intro17-lambda-calculus-reductions-4.hs
-- author: Jeanhwea

--   (λg.((λf.( (λx.(f (x x))) (λx.(f (x x))) )) g)) 
-- = (λg.((λf.( [λx.(f (x x))/x](f (x x)) )) g)) 
-- = (λg.((λf.(f ( (λx.(f (x x))) (λx.(f (x x))) ) )) g)) 
-- = (λg.((λf.(f ( [λx.(f (x x))/x] (f (x x))       )) g)) 
-- = (λg.((λf.(f((f (λx.(f (x x)) λx.(f (x x))))  )) g)) 
-- = ...

-- this is does not reduce - it grows!

-- CAN'T REDUCE
