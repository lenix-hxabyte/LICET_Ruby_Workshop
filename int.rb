(1..100).each do|x|
   if (x%3)==0
    puts"fizz"
    elsif (x%5)==0
    puts"buzz"
	elsif (x%5 and x%3)==0
	puts"fizzbuzz"
    else puts x
    end
   end

