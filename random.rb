def findnum(arr)
	arr.each do |x|
	puts x if ((x*2)%3)==0
	end
end
findnum(1..100)
