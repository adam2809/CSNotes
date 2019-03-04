insert :: Int -> [Int] -> [Int]
insert n [] = [n]
insert n (l:ls) =
  if n <= l then
    n:l:ls
  else
    l:insert n ls

isort :: [Int] -> [Int]
isort [] = []
isort (n:ns) = insert n (isort ns)

merge :: [Int] -> [Int] -> [Int]
merge [] b = b
merge a [] = a
merge (a:as) (b:bs) =
  if a <= b then
    a:(merge as (b:bs))
  else
    b:(merge (a:as) bs)

halve :: [a] -> ([a],[a])
halve x = (take h x, drop h x) where h = length x 'div' 2 

msort :: [Int] -> [Int]
msort [] = []
msort [x] = [x]
