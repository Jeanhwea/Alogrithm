-- filename: intro15-lambda-calculus-reductions-2.hs:w
-- author: Jeanhwea

--   ((λx.((λy.(x y))x))(λz.w))
-- = [λz.w/x] ((λy.(x y))x)
-- = (λy.((λz.w) y))(λz.w))
-- = [λz.w/y] ((λz.w) y)
-- = (λz.w) λz.w
-- = [λz.w/z] (w)
-- = w

