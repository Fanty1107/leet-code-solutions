package main

import "fmt"

func romanToInt(s string) int {
	var number int
	m := map[byte]int{
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000,
	}

	for i := 0; i < len(s); i++{
		if i+1 < len(s) && m[s[i]] < m[s[i+1]]{
			number -= m[s[i]]
		}else{
			number += m[s[i]]
		}
	}
	return number;
}


func main(){
	fmt.Println(romanToInt("MCMXCIV"))
}
