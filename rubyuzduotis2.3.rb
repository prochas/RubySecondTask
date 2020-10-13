#Aprasomi kintamieji
a = 0
a1 = 0
n = 1
test = 0
test1=1

#Prasukamas while ciklas
while test1 > 0.00001
  a = (n+1)/(Math.sqrt((n+1)*(n+1)+1)*Math.sqrt((n+1)*(n+1)-1)) #Panaudota formule is uzduoties
  a1=(n+1+1)/(Math.sqrt((n+1+1)*(n+1+1)+1)*Math.sqrt((n+1+1)*(n+1+1)-1)) #Panaudota formule is uzduoties

  test=a1-a
  test1=(test).abs

  n+=1
end

#Iskvieciamas a1 kintamasis
puts " #{a1}"