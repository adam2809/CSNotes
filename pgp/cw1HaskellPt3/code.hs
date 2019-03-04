-- second1 :: [a] -> a
second2 :: [a] -> a
second3 :: [a] -> a

-- second1 [a] = head head [a]
second2 a = a !! 1
second3 (a:as) = a
