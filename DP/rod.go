package main

import (
	"fmt"
	"sync"
)

func maximum(a int, b int) int {
	if a > b {
		return a
	}
	return b
}

func maxRevenueUTK(length int, prices []int) int {
	var ans func(length int, prices []int) int
	store := map[int]int{}
	ans = func(length int, prices []int) int {
		if length == 0 {
			return 0
		}

		val, ok := store[length]
		if ok {
			return val
		}

		max := 0

		if length < len(prices) {
			max = prices[length]
		}

		for i := 1; i <= length/2; i++ {
			max = maximum(max, ans(i, prices)+ans(length-i, prices))
		}
		store[length] = max
		return max
	}

	return ans(length, prices)
}
func maxRevenue(length int, prices []int) int {
	var ans func(length int, prices []int) int
	store := map[int]int{}
	ans = func(length int, prices []int) int {
		if length == 0 {
			return 0
		}

		val, ok := store[length]
		if ok {
			return val
		}

		max := 0

		if length < len(prices) {
			max = prices[length]
		}

		for i := 1; i < length/2 && i < len(prices); i++ {
			max = maximum(max, prices[i]+ans(length-i, prices))
		}
		store[length] = max
		return max
	}

	return ans(length, prices)
}

func main() {
	var cases int
	fmt.Printf("Cases: ")
	fmt.Scan(&cases)

	for i := 0; i < cases; i++ {
		var wg sync.WaitGroup
		var len int
		fmt.Printf("Enter len: ")
		fmt.Scan(&len)

		wg.Add(1)
		go func() {
			defer wg.Done()
			fmt.Printf("Max revenue CLRS: %d\n", maxRevenue(len, []int{0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30}))
		}()

		wg.Add(1)
		go func() {
			defer wg.Done()
			fmt.Printf("Max revenue utkarsh: %d\n", maxRevenueUTK(len, []int{0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30}))
		}()

		wg.Wait()
	}
}
