-- filename: intro14-lambda-calculus-reductions-1.hs
-- author: Jeanhwea

--   ((λx.(x y))(λz.z))
-- = [λz.z/x] (x y)
-- = (λz.z) y
-- = [y/z] z
-- = y

