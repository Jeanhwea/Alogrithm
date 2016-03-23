-- filename: intro16-lambda-calculus-reductions-3.hs
-- author: Jeanhwea

--   ((λx.(x x))(λx.(x x))) 
-- = [λx.(x x)/x] (x x) 
-- = ((λx.(x x))(λx.(x x))) 
-- = ...
-- = ((λx.(x x))(λx.(x x))) 

-- CAN'T REDUCE
